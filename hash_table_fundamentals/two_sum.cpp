#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> two_sum(vector <int> &v, int t){

    unordered_map<int,int> seen; 
  
    for (int i = 0; i < v.size(); i++){
	int complement = 0;
	complement = t - v[i];
	if (seen.find(complement) != seen.end()){
		return {seen[complement],i};
	}
	else{
		seen[v[i]] = i;
	}
    }
    return {};
}




int main(){

	vector <int> test_case = {-1,-2,-3,-4,-5};
	int target = -8;

	vector <int> res = two_sum(test_case,target);

	for (int i = 0; i < res.size(); i++){
		cout << res[i] << " ";
	}

	return 0;

}
