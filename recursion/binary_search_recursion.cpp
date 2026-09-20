#include <iostream>
#include <vector>


using namespace std;
int binarySearch(vector <int> arr,int low,int high, int target){

  //Step 1:  if target does not exist return - 1
  if (low > high){
    return -1;
  }

   int mid = low + (high - low) / 2;


  if (arr[mid] == target){
    return mid;  
  }

  if (target < arr[mid]){
    return binarySearch(arr,low,mid -1, target);
  }

    return binarySearch(arr,mid+1,high,target);

}



int main(){

  vector <int> test_vec = {1,3,5,7,9,11,13};

 cout <<  binarySearch(test_vec,0,test_vec.size() -1,7) << " ";
}
