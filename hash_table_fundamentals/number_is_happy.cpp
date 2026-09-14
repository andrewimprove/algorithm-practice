#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;
// Extract each digit in n
// square it then add to the next digit of n
//
//
//
//
//
int helper_n(int n){

  int total = 0;
  for (int i = 0; n != 0; i++){
    int saved = n % 10;
    total = total + saved * saved;
    n = n / 10;
    if (n == 0){
      return total;
    }
  }
  return total;
};



bool isHappy(int n){

  unordered_set<int> m;

  while (n != 1){
    n = helper_n(n);
    if (m.find(n) != m.end()){
      return false;
    }
    else{
    m.insert(n);
    }
  }
  return true;
};

int main(){

  int test = 116;

 cout <<isHappy(test) << " ";

 return 0;
}
