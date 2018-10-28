#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int N, Q, temp;
	cin >> N;
	vector<int> monas;
	vector<int> alturas;
	for(int i = 0; i < N; i++){
		cin >> temp;
		monas.push_back(temp);
	}
	vector<int>::iterator k;
	cin >> Q;
	for(int j = 0; j < Q; j++){
		cin >> temp;
		if(temp <= *monas.begin()){
			cout << "X ";
		}
		else{
			k = lower_bound(monas.begin(), monas.end(), temp);
			cout << *(--k) << " ";
		}
		k = upper_bound(monas.begin(), monas.end(), temp);
		if(k == monas.end()){
			cout << "X" << endl;
		}
		else{
			cout << *k << endl;
		}
	}
	return 0;
}