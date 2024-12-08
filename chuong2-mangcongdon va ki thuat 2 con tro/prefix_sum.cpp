#include <bits/stdc++.h>
using namespace std; 

int main(){ 
	//mang 1 chieu 
//	int n; 
//	cin >> n; 
//	int a[n]; 
//	for(int &x : a){ 
//		cin >> x; 
//	}
//	int pre[n]; 
//	pre[0] = a[0];
//	for(int i = 1; i < n; i++){ 
//		pre[i] = pre[i-1] + a[i];
//	}
//	for(int x : pre){
//		cout << x << " ";
//	}
//	cout << endl;
//	int l, r; 
//	cin >> l >> r; 
//	cout << pre[r] - pre[l] + a[l];

	//mang 2 chieu
	int n, m; 
	cout << "Nhap so hang n, so cot m" << endl;
	cin >> n >> m; 
	int a[n+1][m+1];
	int s[n+1][m+1] = {0};
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			s[i][j] = s[i-1][j] + s[i][j-1] - s[i-1][j-1] + a[i][j];
		}
	}
	cout << "Nhap h1, c1, h2, c2" << endl; 
	int h1, c1, h2, c2;
	cin >> h1 >> c1 >> h2 >> c2;
	cout << s[h2][c2] - s[h2][c1 - 1] - s[h1 - 1][c2] + s[h1-1][c1-1];
}
