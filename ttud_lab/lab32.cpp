//cho 2 so n va c, trong do n la so phan tu trong mang duoc sap xep theo thu tu tang dan
//c la so phan tu cua cac tap con
//trong moi tap con c phan tu co khoang cach nho nhat giua 2 phan tu la d
//tim d max trong tat ca cac tap con c phan tu 

#include <bits/stdc++.h>
#define MAXN 100005
using namespace std;
int t;
int n, c, a[MAXN];
bool check (int distance) {
int sl = 1;
int i=1, j=2;
while (i<n) {
while (j<=n && a[j]-a[i] < distance) ++j;
if (j<=n) sl++;
if (sl>=c) return true; // có th? l?y d? c ph?n t?
i = j;
j++;
}
return false;
}


int MaxDistance () {
int l = 0, r = a[n] - a[1];
while (1<=r) {
int mid = (1+r)/2;
if (check(mid)) l = mid+1; // ti?p t?c th? k?t qu? ? n?a bên ph?i
else r = mid-1; // tìm k?t qu? ? n?a bên trái
}
return r;
}
int main() {
ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
cin >> t;
while (t--) {
cin >> n >> c;
for (int i=1; i<=n; i++) cin >> a[i];
sort(a+1, a+n+1);
cout << MaxDistance() << endl;
}
}
