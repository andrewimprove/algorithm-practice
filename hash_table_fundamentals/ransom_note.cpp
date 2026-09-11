#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

//put string a and then string b into frequency maps
//check 


bool ransom_note(string supply, string demand){

	unordered_map <char, int> m;

	for (int i = 0; i < supply.length(); i++){
		m[supply[i]]++; // supply[i] is the character, where as m[char]++, the ++ is its position
				// so {'a', 1};
	}

	for (int i = 0; i < demand.length(); i++){
			if (m[demand[i]] == 0) return false;
			m[demand[i]]--;
		
	} 
	return true;
}




int main(){

    string a = "aab";
    string b = "c";

    cout << ransom_note(a,b) << " ";
}
