#include <bits/stdc++.h>
using namespace std; 

int main(){
	set<int> s; 
	s.insert(69); 
	s.insert(2);
	s.insert(3);
	s.insert(130);
	s.insert(400);
	set<int>::iterator p; 
	for(p = s.begin(); p != s.end(); p++){ 
		cout << *p << " ";
	} 
	cout << endl ;
	cout << "upper bound of 3 is " << *s.upper_bound(400) << endl;
	cout << "lower bound of 3 is " << *s.lower_bound(3);
}
