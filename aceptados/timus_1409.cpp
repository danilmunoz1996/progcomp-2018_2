#include <iostream>
using namespace std;
int main(){
	int H, L;
	cin >> H >> L;
	cout << ((H + L - 1) - H) << " " << ((H + L - 1) - L) << endl;
	return 0;
}