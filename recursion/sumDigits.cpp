#include <iostream>

using namespace std; 


int sumDigits(int n){

   //BASE CONDITION CORRECT 
    if (n == 0){
      return 0;
    }

    //12
    int tmp = n % 10;
    //tmp = 3 
    //tmp = 2
    // n 12
   // n = 1
    n = n / 10;
    //3
    
    
    return tmp + sumDigits(n);
}


int main(){


  cout << sumDigits(20) << " ";

}
