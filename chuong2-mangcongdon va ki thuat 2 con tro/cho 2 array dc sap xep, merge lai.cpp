#include<bits/stdc++.h>
using namespace std; 

int main(){
	int m,n; 
	cin >> m >> n; 
	int a[m], b[n]; 
	for(int &x : a){ 
		cin >> x; 
	}
	for(int &x : b){ 
		cin >> x; 
	}
	int i = 0;
	int j = 0; 
	while(i < m && j < n){
		if(a[i] <= b[j]){ 
			cout << a[i] << " "; 
			i++;
		}
		else if(b[j] <= a[i]){ 
			cout << b[j] << " "; 
			j++;
		}
	}
	while(i < m){ 
			cout << a[i] << " ";
			i++;
		}
		while(j < n){
			cout << b[j] << " ";
			j++;
		}
}
