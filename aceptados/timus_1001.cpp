#include <iostream>
#include <iomanip>
#include <stack>
#include <math.h>
using namespace std;
int main(){
	stack<long double> s;
	long double temp;
	while(cin >> temp){
		s.push(temp);
	}
	cout << fixed;
	cout << setprecision(4);
	while(!s.empty()){
		cout << sqrt(s.top()) << endl;
		s.pop();
	}
	return 0;
}