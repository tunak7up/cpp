#include <bits/stdc++.h>
#define maxn 100005
using namespace std; 
	int n; 
	pair<int, int> a[maxn];
void nhap(){
	cin >> n; 
	for(int i = 0; i < n; i++){
		cin >> a[i].first >> a[i].second;
	}
}
bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;	
}
void tinh(){
	int res = 0; 
	int last = -1; 
	sort(a, a+n, cmp);
	for(int i = 0; i < n; i++){
		if(a[i].first > last){
			res++; 
			last = a[i].second;
		}
	}
	cout << res;
}
int main(){
	nhap();
	tinh();
	return 0;
}
