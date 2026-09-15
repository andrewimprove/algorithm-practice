#include <queue>
#include <iostream>


using namespace std;

class RecentCounter{
public:
    queue <int> request_queue;
    RecentCounter(){
	
    }

    int ping(int t){
	request_queue.push(t);

	while (!request_queue.empty() && request_queue.front() < (t - 3000)){
		request_queue.pop();
    }
    return request_queue.size();
}
};
int main(){

  RecentCounter myRecentCounter; 
  cout << myRecentCounter.ping(1) << " ";
  cout << myRecentCounter.ping(100) << " ";
  cout << myRecentCounter.ping(3001) << " ";
  cout << myRecentCounter.ping(3002) << " ";

};
