#include <iostream>

using namespace std;

// Base class
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }

   protected:
      int width;
      int height;
};

// Derived class
class Rectangle: public Shape {
   public:
      int getArea() {
         return (width * height);
      }
};

int main(void) {
   Rectangle Rect;

   Rect.setWidth(15);
   Rect.setHeight(17);


   cout << "Inheritance " << endl;
   cout << "base class - shape " << endl;

   cout << "Derived class - Rectangle" << endl;
   cout << "Instance Rect " << endl;

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   return 0;
}
