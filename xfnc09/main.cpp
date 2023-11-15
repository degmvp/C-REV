#include <iostream>


int main(){

    // break and continue : for loops
    const size_t COUNT{20};


    for(size_t i{0} ; i < COUNT ; ++i ){

        if(i==5)
            continue;

        if(i == 11)
            break; // Breaks out of the loop
        std::cout << "i : " << i << std::endl;
    }
    std::cout << "Loop done!" << std::endl;


   // break and continue : while loop

   size_t k{0};

   while (k < 20){

       if(k==5){
            ++k;
            continue;
       }

     if(k==11)
        break;


        std::cout << "k : " << k << std::endl;
        ++k;

   }
   std::cout << "Loop done!" << std::endl;


  //break and continue : do while loop
  size_t ii{0};

  do{
      if(ii==5){
            ++ii;
            continue;
       }

     if(ii==11)
        break;


        std::cout << "ii : " << ii << std::endl;
        ++ii;

  }while(ii <20);

    return 0;
}
