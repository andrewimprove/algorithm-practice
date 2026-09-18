#include <iostream>


using namespace std;


int factorial(int n){

  // n = 5! 

  //BASE CONDITION 
  if (n == 0)
    return 1; 

  return n * factorial(n-1); 

}

int main(){

  cout << factorial(5) << " ";

}
