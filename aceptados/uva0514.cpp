#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){
	int N, temp;
	stack<int> carros, estacion, original;
	vector<int> retornos;
	while(1){
		cin >> N;
		if(!N)break;
		while(1){
			cin >> temp;
			if(!temp){
				cout << endl;
				break;
			}
			carros.push(temp);
			original.push(1);
			for(int i = 1; i < N; i++){
				cin >> temp;
				carros.push(temp);
				original.push(i+1);
			}
			while(!carros.empty() || !original.empty()){
				if(!carros.empty()){
					estacion.push(carros.top());
					carros.pop();
				}
				if(!estacion.empty()){
					while(estacion.top() == original.top()){
						estacion.pop();
						original.pop();
						if(estacion.empty() || original.empty())break;
					}
				}
				if(!estacion.empty() && !original.empty()){
					if(carros.empty() && estacion.top() != original.top()){
						cout << "No" << endl;
						break;
					}
				}
			}
			if(estacion.empty()){
				cout << "Yes" << endl;
			}
			original = stack<int>();
			carros = stack<int>();
			estacion = stack<int>();
		}
	}
	return 0;
}