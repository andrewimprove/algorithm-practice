#include <iostream>


using namespace std;
int countOccurences(int arr[], int size, int x, int index){
//Step 1: If there are no occurences in the function
//return 0 

  if (index == size){
    return 0; 
  }
//Step 2: Loop through the array 
//Check if the target element is in the array
//if it is count the occurence 
  if (x == arr[index]){
    return 1 + countOccurences(arr,size,x,index+1);
  }
  else{
    return 0 + countOccurences(arr,size,x,index+1);
  }
}


int main(){

  int test_arr[] = {1,2,3,4,4,4,5};

  cout << countOccurences(test_arr,6,4,0) << " ";

}
