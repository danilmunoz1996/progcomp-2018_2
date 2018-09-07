#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main(){
	int k;
	vector<pair<int, int> > pares;
	cin >> k;
	while(k != 0){
		int x0, y0;
		cin >> x0 >> y0;
		int x,y;
		for(int i = 0; i < k; i++){
			cin >> x >> y;
			pares.push_back(make_pair(x, y));
		}
		pair<int, int> p;
		for(int i = 0; i < k; i++){
			p = pares[i];
			if(p.first == x0 || p.second == y0){
				cout << "divisa" << endl;
			}
			else if(p.first > x0 && p.second > y0){
				cout << "NE" << endl;
			}
			else if(p.first > x0 && p.second < y0){
				cout << "SE" << endl;
			}
			else if(p.first < x0 && p.second > y0){
				cout << "NO" << endl;
			}
			else{
				cout << "SO" << endl; 
			}
		}
		pares.clear();
		cin >> k;
	}
	return 0;
}