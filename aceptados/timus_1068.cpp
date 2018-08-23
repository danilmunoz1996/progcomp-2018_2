#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int sum = 0;
	if(n > 0){
		for(int i = 1; i <= n; i++){
			sum += i;
		}
	}
	else if(n == 0){
		sum = 1;
	}
	else{
		for(int i = 1; i >= n; i--){
			sum += i;
		}
	}
	cout << sum << endl;
	
	return 0;
}