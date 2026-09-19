#include <iostream>


using namespace std;
void print_asc(int n){

  //5 
  if (n <= 0){
    return;
  }
 
  print_asc(n - 1);

  cout << n << " ";
}

int main(){

   print_asc(5);

}
