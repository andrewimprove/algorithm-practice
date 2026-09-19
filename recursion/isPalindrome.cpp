#include <iostream>
#include <string> 

using namespace std;

string reverseString(string s){

  if (s.length() <= 1){
    return s;
  }

  char lastChar = s.back(); 
  s.pop_back();

  return lastChar + reverseString(s);
}


bool isPalindrome(string s,int left, int right){

  if (left >= right){
    return true;
  }

  if (s[left] != s[right]){
    return false; 
  }
    
  return isPalindrome(s, left+1, right-1);
}

int main(){

  string test = "kayak";

  cout << isPalindrome(test,0, test.length() -1);

}
