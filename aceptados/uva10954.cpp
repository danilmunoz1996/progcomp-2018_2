#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
int main(){
	int N, temp, sum;
	vector<int> v;
	priority_queue<int> cola;
	cin >> N;
	while(N){
		for(int i = 0; i < N; i++){
			cin >> temp;
			v.push_back(temp);
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < N; i++){
			cola.push(-v[i]);
		}
		sum = 0;
		temp = 0;
		while(cola.size() > 1){
			sum = -cola.top();
			cola.pop();
			sum -= cola.top();
			cola.pop();
			cola.push(-sum);
			temp += sum;
		}
		cout << temp << endl;
		v = vector<int>();
		cola.pop();
		cin >> N;
	}
	return 0;
}