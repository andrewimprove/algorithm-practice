#include <iostream>
#include <queue> 
#include <unordered_map> 
#include <string>

//TODO:
//Insert all the characters in a queue
//Check if the current queue 
//
//

using namespace std; 
class Solution {
  public:
    int firstUniqChar(string s){
      unordered_map <char,int> m; 
      queue <char> q; 

      for (int i = 0; i < s.length(); i++){
        m[s[i]]++;
        q.push(s[i]);
      }

      int idx = 0;
      while (!q.empty()){
        if (m[q.front()] > 1){
            q.pop();
            idx++;
        }
        else{
          return idx; 
        }
      }
      return -1; 
    }
};


int main(){

  Solution mySolution; 

  string test_string = "loveleetcode";
  cout << mySolution.firstUniqChar(test_string) <<  " ";

}
