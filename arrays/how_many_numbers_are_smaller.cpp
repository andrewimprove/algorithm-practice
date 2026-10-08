#include <vector>
#include <iostream>

using namespace std;

vector <int> how_many(vector<int>& nums){

   vector <int> ans;
   int count = 0;
   for (int i = 0; i < nums.size(); i++){
      for (int j = 0; j < nums.size(); j++){
         if (nums[i] > nums[j]){
            count++;
         }
      }
       ans.push_back(count);
      count = 0;
   }
   return ans;
}


int main(){

vector <int> test = {8,1,2,2,3};

	vector <int> res = how_many(test);

   for (int i = 0; i < res.size(); i++){
      cout << res[i] << " ";
   }
}
