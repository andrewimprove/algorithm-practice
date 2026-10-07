#include <vector>
#include <iostream>
using namespace std;

void move_zero(vector<int>& nums){

   int writer = 0;
   
   for (int reader = 0; reader < nums.size(); reader++){
      if (nums[reader] != 0){
         int temp = nums[reader];
         nums[reader] = nums[writer];
         nums[writer] = temp; 

         writer++;
      }
   }
};

int main(){

vector <int> test = {0,1,0,3,12};

   move_zero(test);
     for (int i = 0; i < test.size(); i++){
      cout << test[i] << " ";
   }
}
