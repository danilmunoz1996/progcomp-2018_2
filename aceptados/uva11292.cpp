#include <iostream>
#include <queue>
#include <algorithm>
#include <unistd.h>
using namespace std;
int main(){
	int n, m;
	priority_queue<int> dragon;
	priority_queue<int> knights;
	int gold;
	int temp;
	cin >> n >> m;
	while(n || m){
		gold = 0;
		for(int i = 0; i < n; i++){
			cin >> temp;
			dragon.push(-temp);
		}
		for(int i = 0; i < m; i++){
			cin >> temp;
			knights.push(-temp);
		}
		if(n > m){
			cout << "Loowater is doomed!" << endl;
		}
		else{
			while(!dragon.empty() && !knights.empty()){
				if(-knights.top() >= -dragon.top()){
					gold -= knights.top();
					knights.pop();
					dragon.pop();
				}
				else{
					knights.pop();
				}
			}
			if(!dragon.empty()){
				cout << "Loowater is doomed!" << endl;
			}
			else{
				cout << gold << endl;
			}
			dragon = priority_queue<int>();
			knights = priority_queue<int>();
		}
		cin >> n >> m;
	}
	return 0;
}