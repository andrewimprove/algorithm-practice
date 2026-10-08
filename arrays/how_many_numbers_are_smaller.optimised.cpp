#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

vector <int> how_many(vector<int>& nums){

   vector <int> temp = nums;
   sort(temp.begin(),temp.end());

   map <int,int> m;
   vector <int> ans;

   for (int i = 0; i < temp.size(); i++){ 
      m.insert({temp[i],i}); 
   }
   
   for (int i = 0; i < nums.size(); i++){
      if (m.count(nums[i]) > 0){
         ans.push_back(m[nums[i]]);
      }
   }
   return ans;
}


int main(){

vector <int> test = {8,1,2,2,3}; //{1,2,2,3,8}

	vector <int> res = how_many(test);

   for (int i = 0; i < res.size(); i++){
      cout << res[i] << " ";
   }
}
