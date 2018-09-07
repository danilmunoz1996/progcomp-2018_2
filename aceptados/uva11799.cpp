#include <iostream>
#include <queue>
using namespace std;
int main(){
	int T;
	int N;
	int temp;
	vector<int> tests;
	priority_queue<int> pq;
	cin >> T;
	for(int i = 0; i < T; i++){
		cin >> N;
		for(int j = 0; j < N; j++){
			cin >> temp;
			pq.push(temp);
		}
		tests.push_back(pq.top());
		pq = priority_queue<int>();
	}
	for(int i = 0; i < tests.size(); i++){
		cout << "Case " << i+1 << ": " << tests[i] << endl;
	}
	return 0;
}