#include <iostream>
#include <vector>

using namespace std;


void print_reverse(vector <int> v,int idx){

  //base case 
  if (idx < 0){
    return;
  }

  cout << v[idx] << " "; 

  print_reverse(v,idx-1);

}


int main(){

  vector <int> vec = {1,2,3,4};

  print_reverse(vec,vec.size()-1);

}
