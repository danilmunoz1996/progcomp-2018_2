#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int T, S, A, F, temp;
	vector<int> ordenadas;
	vector<int> absisas;
	cin >> T;
	while(T){
		cin >> S >> A >> F;
		for(int i = 0; i < F; i++){
			cin >> temp;
			ordenadas.push_back(temp);
			cin >> temp;
			absisas.push_back(temp);
		}
		sort(ordenadas.begin(), ordenadas.end());
		sort(absisas.begin(), absisas.end());
		int media = F%2 == 0 ? (F-1)/2 : F/2;
		cout << "(Street: " << ordenadas[media] << ", Avenue: " << absisas[media] << ")" << endl;
		ordenadas.clear();
		absisas.clear();
		T--;
	}
	return 0;
}