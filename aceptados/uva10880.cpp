#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;
int main(){
	int N;
	vector<set<int> > divs;
	set<int> temp;
	cin >> N;
	int C, R;
	vector<int> restos;
	for(int i = 0; i < N; i++){
		cin >> C >> R;
		restos.push_back(R);
		if(C == R){
			temp.insert(0);
		}
		else{
			int d = C-R;
			for(int j = 1; j <= sqrt(d); j++){
				if(!(d%j)){
					temp.insert(d/j);
					temp.insert(j);
				}
			}
		}
		divs.push_back(temp);
		temp.clear();
	}
	for(int i = 0; i < N; i++){
		temp = divs[i];
		cout << "Case #" << i+1 << ":";
		for(auto j = temp.begin(); j != temp.end(); j++){
			if(*j == 0 || *j > restos[i]){
				cout << " " << *j;
			}
		}
		cout << endl;
	}
	return 0;
}