#pragma once

#include <mpg123.h>
#include <ao/ao.h>
#include <memory>
#include <iostream>

class PlayMP3 {
  // Primitive types
  std::size_t buffer_size, done;
  int driver, err, channels, encoding;
  long rate;
  std::string track;

  // LibMPG123 type and smart pointer
  mpg123_handle *mh;
  std::shared_ptr<char> buffer;

  // AO types
  ao_sample_format format;
  ao_device *dev;

  public:
    PlayMP3();
    ~PlayMP3();
    void music(char*);
    void play();
};