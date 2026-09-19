#include <iostream>


using namespace std;


int fibon(int n){
 
  if (n <= 1){
    return n;
  }


  return fibon(n - 1)  + fibon(n - 2);
}


int main(){


  cout << fibon(35) << " ";
  cout << fibon(40) << " ";
  cout << fibon(45) << " ";


}
