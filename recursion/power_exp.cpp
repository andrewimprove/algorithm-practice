#include <iostream>

using namespace std; 

int power(int n, int e){

    if (e == 0){
      return 1;
    }

    e = e - 1;

    return n * power(n,e);
}



int main(){

  cout << power(2,10) << " ";
}
