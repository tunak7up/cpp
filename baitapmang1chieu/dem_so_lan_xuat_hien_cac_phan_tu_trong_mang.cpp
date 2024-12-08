#include <bits/stdc++.h>
using namespace std; 

int main(){
	int n; 
	cin >> n; 
	cin.ignore();
	map<string, int> mp; 
	string tmp;
	for(int i = 0; i < n; i++){ 
		cin >> tmp;
		mp[tmp]++;
	}
	for(auto x : mp){ 
		cout << x.first << " " << x.second << endl;
	}
}
