#include <bits/stdc++.h>
using namespace std; 

bool search(int a[], int n, int x){ //n la so phan tu
	if(x < a[0] || x > a[n-1]){ 
		return false;
	}
	int l = 0;
	int r = n-1; 
	while(l <= r){ 
		int mid = (l+r)/2;
		if(x < a[mid]){
			r = mid - 1;
		}
		else if(a[mid] < x){ 
			l = mid + 1;
		}
		else return true;
	}
	return false;
}

int main(){ 
	
	int n; cin >> n;
	int x; cin >> x; 
	int a[n];
	for(int i = 0; i < n; i++){ 
		cin >> a[i];
	}
	sort(a, a+n); 
	for(int i = 0; i < n; i++){ 
		cout << a[i] << " ";
	} 
	cout << endl;
	cout << search(a, n, x);
}
