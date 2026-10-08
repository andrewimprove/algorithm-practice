#include <vector>
#include <iostream>

using namespace std;

vector <int> two_sum(vector<int>& nums, int target){

   int left = 0;
   int right = nums.size() - 1;

  
   while (left < right){
      int curr_sum = nums[left] + nums[right];

      if (curr_sum == target){
         return {left + 1, right+1};
      }

      if (curr_sum > target){
         right--;
      }

      if (curr_sum < target){
         left++;
      }
   }
   return {};
}


int main(){

vector <int> test = {2,3,4};

	vector <int> res = two_sum(test,6);

   for (int i = 0; i < res.size(); i++){
      cout << res[i] << " ";
   }
}
