#include <vector>
#include <iostream>
using namespace std;

int highest_alt(vector<int>& gains){


   int maxVal = 0;
   int currPosition = 0; 
   int nextPosition = 0;
   //has to be positive and the net gain would equate if it is to 1 
   //
   for (int i = 0; i < gains.size(); i++){
      currPosition += gains[i];

      if (currPosition > maxVal){
         maxVal = currPosition;
      }
        }
   return maxVal;
 }


int main(){

vector <int> test = {-5,1,5,0,-7};

	cout << highest_alt(test) << " ";
}
