#include <iostream>

using namespace std;

int fastpower(int n, int e){

  if (e == 0){
    return 1;
  }

  int half = fastpower(n,e/2);
  if (e % 2 == 0){
    return half * half;
  }
  else{
    return n * half * half;
  }
}




int main(){

  cout << fastpower(2,11) <<" ";

}
