#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;

bool findDuplicate(vector<int>& nums){

	unordered_set<int> seen;
	for (int i = 0; i < nums.size(); i++){
		if (seen.count(nums[i]) > 0){
			return true;
		}
		else{
			seen.insert(nums[i]);
		}
	}
	return false;
}

int main(){

    vector<int> test_nums; 

    test_nums.push_back(2);
    test_nums.push_back(1);
    test_nums.push_back(1);
    test_nums.push_back(4);

    cout << findDuplicate(test_nums) << " "; 

}
