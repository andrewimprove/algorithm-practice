#include <vector>
#include <iostream>

using namespace std;

int maxProfit(vector<int>& prices){

int minPrice = prices[0]; 
int maxProfit = 0; 
int today_profit = 0;


   for (int i = 0; i < prices.size(); i++){
      //prices[i] = 7
      //0
      //7 
      if (prices[i] < minPrice){
         minPrice = prices[i];
      }

      today_profit = prices[i] - minPrice; 
      if (today_profit > maxProfit){
         maxProfit = today_profit;
      }
   }

   return maxProfit;
}


int main(){

vector <int> test = {7,1,5,3,6,4};

	cout << maxProfit(test) << " ";
}
