#include <bits/stdc++.h>
using namespace std; 

int main(){
	cout <<"Nhap so pt cua mang\n"; 
	int n; cin >> n; 
	int a[n]; 
	for(int &x : a){ 
		cin >> x; 
	}
	int l = 0; 
	int r = 0; 
	int res = 0; 
	int sum = 0;
	cout << "Nhap q\n";
	int q; 
	cin >> q; 
	//q = 5
	//1 4 7 2 1 2 3
	for(int r = 0; r < n; r++){
		sum += a[r]; 
		while(sum > q){
			sum -= a[l]; 
			l++;
		}
		res = max(res, r-l+1);
	}
	cout << res; 
}
