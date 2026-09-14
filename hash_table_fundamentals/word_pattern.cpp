#include <iostream>
#include <string> 
#include <unordered_map>
#include <sstream>
#include <vector>
using namespace std;

bool word_pattern(string pattern, string s){

	stringstream ss(s);

	unordered_map <char, string> m1;
	unordered_map <string, char> m2; 
	vector<string> v; 

	string word; 
	while (ss >> word){
	   v.push_back(word);
	}
            
	if (pattern.length() != v.size()){
		return false;
	}
	for (int i = 0; i < v.size(); i++){

	    if (m1.count(pattern[i]) && m1[pattern[i]] != v[i]){
		return false;
	}
	    if (m2.count(v[i]) && m2[v[i]] != pattern[i]){
		return false;
	}
		m1[pattern[i]] = v[i];
		m2[v[i]] = pattern[i];
	}
	return true;
}


int main(){

    string pat = "aaaa";
    string sentence = "cat dog dog dog"; 
    cout << word_pattern(pat,sentence) << " ";
    return 0;
}
