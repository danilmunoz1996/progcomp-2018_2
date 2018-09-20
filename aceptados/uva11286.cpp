#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
int main(){
	map<string, int> ramos;
	string temp;
	vector<string> entradas;
	vector<string> aux;
	int N;
	cin >> N;
	while(N){
		for(int i = 0; i < N; i++){
			for(int j = 0; j < 5; j++){
				cin >> temp;
				aux.push_back(temp);
			}
			sort(aux.begin(), aux.end());
			temp.clear();
			for(int j = 0; j < 5; j++){
				temp += aux[j]; 
			}
			entradas.push_back(temp);
			auto p = ramos.find(temp);
			if(p == ramos.end()){
				ramos.insert(pair<string, int>(temp, 1));
			}
			else{
				ramos[temp]++;
			}
			aux.clear();
		}
		string pop;
		int max = 0;
		int numero = 0;
		for(auto i = ramos.begin(); i != ramos.end(); i++){
			if(i->second > max){
				max = i->second;
				numero = 0;
			}
			if(i->second == max){
				numero += i->second;
			}
		}
		cout << numero << endl;
		entradas.clear();
		ramos.clear();
		cin >> N;
	}
	return 0;
}