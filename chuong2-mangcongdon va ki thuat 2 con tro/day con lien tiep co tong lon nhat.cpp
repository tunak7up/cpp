#include <bits/stdc++.h>
using namespace std; 

int main(){
	cout <<"Nhap so pt cua mang\n"; 
	int n; cin >> n; 
	int a[n]; 
	for(int &x : a){ 
		cin >> x; 
	}
	int sum = 0; 
	int max = 0; 
	for(int i = 0; i < n; i++){
		sum += a[i]; 
		if(sum < 0){
			sum = 0; 
			continue; 
		}
		if(sum > max){ 
			max = sum;
		}
	}
	cout << max;
}
