#include <iostream>
#include <stack> 


//Balanced Brackets is a classic stack problem in the leetcode space
//It test a student's understanding of the stack data structure LIFO cycle 
//The problem statement is to verify whether a string of parenthesis have a set pair of opening and closing brackets, such as (){}[]
//If the bracket contains such pair it is considered balanced
//Time complexity of this algorithm:
//Best case - O(1) or O(n)
//Average case - O(n) 
//Worst case - O(n)

using namespace std;
bool balance_bracket(string &s){

    stack <char> st; 

    for (int i = 0; i < s.length(); i++){
	if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
		st.push(s[i]);
	} 
	else if (s[i] == ')' || s[i] == '}' || s[i] == ']'){
		if (st.empty()){
		return false; 
		}
	

	if (s[i] == ')' && st.top() != '(' ||s[i] == '}' && st.top() != '{' || s[i] == ']' && st.top() != '['){
		return false; 
	}
	st.pop();
        }
    }
    return st.empty();
}


int main(){

    string test_case = "[{()}]";
    string test_case_two = "{)";
    string test_case_three = ""; 

    std::cout << balance_bracket(test_case) << std::endl; 
    std::cout << balance_bracket(test_case_two) << std::endl; 
    std::cout << balance_bracket(test_case_three) << std::endl;

}
