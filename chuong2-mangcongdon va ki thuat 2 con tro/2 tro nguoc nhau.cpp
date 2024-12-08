#include <bits/stdc++.h>

using namespace std; 
int main(){
	cout << "Nhap kich thuoc cua mang\n";
	int n; 
	cin >> n; 
	int a[n];
	for(int &x : a){
		cin >> x;
	}
	int i = 0; 
	int j = n-1; 
	cout << "Nhap Q biet ai + aj = Q\n";
	int q; 
	cin >> q; 
	int res = 0;
	while(i < j){
		if(a[i] + a[j] == q){
			res++; 
			i++; 
			j--;
		}
		else if(a[i] + a[j] < q){
			i++;
		}
		else j--;
	}
	cout << res;
}
