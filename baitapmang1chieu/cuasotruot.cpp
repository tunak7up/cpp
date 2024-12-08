#include <bits/stdc++.h>
#include <set>
using namespace std; 
int main(){ 
	int n; int k; 
	cin >> n >> k ; 
	int a[n]; 
	for(int i = 0; i < n; i++){ 
		cin >> a[i]; 
	}
	for(int x : a){ 
		cout << x << " ";
	}
	cout << endl;
	multiset<int> ms; 
	for(int i = 0; i < k; i++){ 
		ms.insert(a[i]);
	}
	for(int i = k; i < n; i++){ 
		cout << *ms.rbegin() << " ";
		ms.erase(ms.find(a[i-k]));
		ms.insert(a[i]);
	}
	cout << *ms.rbegin();

			
}
