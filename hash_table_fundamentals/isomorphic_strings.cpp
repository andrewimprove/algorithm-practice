#include <iostream>
#include <vector>
#include <unordered_map> 
#include <string>


//isomorphic string in this case is a string where an identitical string can be mapped onto another as their structure is the same. For an example, add can be mapped to mpp
//If it can be mapped to the same structure but with different characters it is isomorphic, otherwise it is not. 
//
//PSEUDOCODE:
//
//iterate the strings and map them using maps <char, char> 
//have a function that checks the mapping, if you encounter a key that exists but it is already mapped to a value and that value isn't the same. then return false otherwise it is true. 
//
//

using namespace std;

bool isIsomorphic(string s, string t){

	unordered_map <char, char> m1; 
	unordered_map <char, char> m2; 

	if (s.length() != t.length()){
		return false;
	}

	for (int i = 0; i < s.length(); i++){
	    if (m1.count(s[i]) && m1[s[i]] != t[i]){
		return false; 
	    }

	    if (m2.count(t[i]) && m2[t[i]] != s[i]){
		return false;
	    }
	    m1[s[i]] = t[i];
	    m2[t[i]] = s[i];
	}
	return true; 
}


int main(){

    string a = "dsaok";
    string b = "fskos";
	
    cout << isIsomorphic(a,b) << " ";
    
    return 0; 
}
