#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

vector <int> find_all_numbers(vector<int>& nums){

   vector <int> ans;
   unordered_set <int> seen;

   for (int i = 0; i < nums.size(); i++){
      seen.insert(nums[i]);
   }

   for (int i = 1; i < nums.size()+1; i++){
      if (seen.count(i) > 0){
         continue;
      }
      ans.push_back(i); 
}
         return ans;

}


int main(){

vector <int> test = {1,1};

	vector <int> res = find_all_numbers(test);

   for (int i = 0; i < res.size(); i++){
      cout << res[i] << " ";
   }
}
