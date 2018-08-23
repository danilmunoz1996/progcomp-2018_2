#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int k, temp;
	vector<int> aux;
	cin >> k;
	while(cin >> temp){
		aux.push_back(temp);
	}
	sort(aux.begin(), aux.end());
	int min = 0;
	for(int i = 0; i < (k/2 + 1); i++){
		min += (aux[i]/2) + 1;
	}
	cout << min << endl;
	return 0;
}