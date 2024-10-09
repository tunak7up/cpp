#include <bits/stdc++.h>

using namespace std; 
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long a[n];
		long long b[n];
		// tao mang b toan -1
		for(int i = 0; i < n; i++){
			b[i] = -1;
		}
		// nhap cac gia tri vao mang a
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		// chay het tung phan tu cua mang a, neu phan tu co gia tri la so thu tu cua mang, luu no vao mang b
		for(int i = 0; i < n; i++){
			if(a[i] >= 0 && a[i] < n){
				b[a[i]] = a[i];
			}
		}
		for(int i = 0; i < n; i++){
		cout << b[i] << " ";
	}
	}
	
	return 0;
}
