#include <bits/stdc++.h>
using namespace std; 

int main(){ 
	int a = 69; 
	int *ptr = &a; 
	*ptr = 100;
	cout << a;
}
