#include <iostream>

using namespace std;

int factorial(int n){

  //Step 1 BASE CASE 
  //Step 2 for all of n, n will * with the next 
  //Step 3 if n hasn't finished looping, call factorial 
  if (n <= 1){
    return n;
  }

  return n * factorial(n - 1);

}


int main(){

  cout << factorial(4) << " ";
}
