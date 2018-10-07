#include <map>
#include <vector>
#include <iostream>
using namespace std;
int main(){
	map<string, string> diccionary;
	string word1, word2, temp;
	while(getline(cin, temp)){
		if(temp == "")break;
		word1 = temp.substr(0, temp.find(" "));
		word2 = temp.substr(temp.find(" ")+1, temp.size());
		diccionary.insert(make_pair(word2, word1));
	}
	while(cin >> word2){
		if(diccionary.find(word2) != diccionary.end())cout << diccionary[word2] << endl;
		else cout << "eh" << endl;
	}
	return 0;
}