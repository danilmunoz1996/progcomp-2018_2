#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin >>n;
	int aux, m;
	vector<int> pesos;
	while(cin >> aux){
		pesos.push_back(aux);
	}
	if(n==1){
		cout << pesos.back() << endl;
		return 0;
	}
	int b1;
	int b2;
	int nn = (1<<n);
	for(int i = 0; i < nn; i++){
		b1 = 0;
		b2 = 0;
		for(int j = 0; j < n; j++){ // sumo los pesos de i en binario
			if(i & (1 << j)){
				b2 += pesos[j];
			}
			else{
				b1 += pesos[j];
			}
		}
		aux = abs(b1 - b2);
		if(i == 0){
			m = aux;
		}
		else{
			if(aux < m)m = aux;
		}
	}
	cout << m << endl;
	return 0;
}