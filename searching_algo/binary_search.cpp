#include <iostream>
#include <vector> 

using namespace std; 

int binary_search(vector <int> &arr, int target){

  //low = first element  
 int low = 0; 
  //high = last element 
 int high = arr.size() - 1;

  //mid = middle element 
  while (low <= high){
  int mid = low + (high - low) / 2;

  if (arr[mid] == target){
    return mid; 
  }

  //if target is lower than 30 
  if (target < arr[mid]){
    high = mid - 1; 
  }
  //if target is greater than 30 
  if (target > arr[mid]){
    low = mid + 1; 
  }
 }
  return -1; 
}

int main(){

  vector <int> test_vec = {1,3,5,7,9,11,13};

  cout << binary_search(test_vec,10) << " ";
}
