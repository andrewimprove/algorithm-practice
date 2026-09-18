#include <iostream>

using namespace std;
int sumTo(int n){


  //5 

  if (n <= 1){
    return 1;
  }

  
  return n + sumTo(n - 1);

}


int main(){

  cout << sumTo(5) <<  " ";

}
