#include <vector>
#include <iostream>

using namespace std;

int removeDuplicates(vector<int>& nums){

   int writer = 0;
   for (int reader = 0; reader < nums.size(); reader++){ 

      if (nums[writer] != nums[reader]){
                   writer++;
         nums[writer] = nums[reader];
      }
   }
   return writer + 1;
}


int main(){

vector <int> test = {1,1,2};

	cout << removeDuplicates(test) << " ";
}
