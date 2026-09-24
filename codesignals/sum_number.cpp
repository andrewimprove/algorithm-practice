#include <iostream>
#include <vector>

using namespace std;

vector <int> check_sum(vector<int> &s){

  vector<int> res;

  int size = s.size();
  int res_val = 0;
  for (int i = 0; i < size; i++){
  
    int a = 0;
    int b = 0;
    int c = 0;
    //0 - 1 
    int a_idx = i - 1;
    int b_idx = i;
    int c_idx = i + 1;

    if (a_idx >= 0 && a_idx < size){
       a = s[a_idx];
    }
    else{
      a = 0;
    }
    if (b_idx >= 0 && b_idx < size){
       b = s[b_idx];
    }
    else{
      b = 0;
    }
    if (c_idx >= 0 && c_idx < size){
       c = s[c_idx];
    }
    else{
      c = 0;
    }
    res_val = a + b + c; 
    res.push_back(res_val);
  }
  return res;
}




int main(){


  vector <int> test_vec = {4,0,1,-2,3};

  vector <int> res = check_sum(test_vec);
  int size = res.size(); 
  for (int i = 0; i < size; i++){
    cout << res[i] << " ";
  }
  return 0;
 }
