#include <iostream>
#include <string>

using namespace std;


string reverseString(string s){

  if (s.length() <=1){
    return s; 
  }

  //s = hello 
  //lastChar = 'o'
  char lastChar = s.back();
  s.pop_back();

  return lastChar + reverseString(s);

}

int main(){

  string test = "hello";
  cout << reverseString(test);

}
