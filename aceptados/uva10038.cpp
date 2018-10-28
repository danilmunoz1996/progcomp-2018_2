#include <iostream>
#include <cmath>
#include <vector>
#include <set>
using namespace std;
int main(){
	set<int> secuencia;
	vector<int> numeros;
	bool flag;
	int n, temp, delta;
	while(cin >> n){
		flag = true;
		for(int i = 0; i < n; i++){
			cin >> temp;
			numeros.push_back(temp);
		}
		if(n == 1){
			cout << "Jolly" << endl;
		}
		else{
			temp = numeros[0];
			for(int i = 1; i < n; i++){
				delta = abs(temp - numeros[i]);
				if(delta < 1 || delta >= n){
					cout << "Not jolly" << endl;
					flag = false;
					break;
				}
				else{
					secuencia.insert(delta);
				}
				temp = numeros[i];
			}
			if(secuencia.size() == (n-1)){
				cout << "Jolly" << endl;
			}
			else if(flag){
				cout << "Not jolly" << endl;
			}
		}
		secuencia.clear();
		numeros.clear();
	}
	return 0;
}