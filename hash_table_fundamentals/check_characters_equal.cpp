#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool are_characters_equal(string s){

	unordered_map<char,int> m;
	for (int i = 0; i < s.length(); i++){
		m[s[i]]++;
	}

  int expected = m.begin()->second;
  for (auto& pair: m){
    if (pair.second != expected){
      return false;
    }
  }
  return true;
}
	//m =
	//{a,1}
	//{b,2}
	//{c,3}
	//{a,4}
	//{b,5}
	//{c,6}
	//{a,7}




int main(){

string s = "abcabc";

cout << are_characters_equal(s) << " ";

return 0;


}
