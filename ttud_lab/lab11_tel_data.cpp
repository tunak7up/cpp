#include <bits/stdc++.h> 
using namespace std;
//map <phone, solangoi, thoi gian goi>
struct data{
	int solangoi; 
	long long thoigiangoi; 
};

bool checkphonenumber(string sdt){
	if(sdt.length() != 10){
		return false;
	}
	for(char x : sdt){
		if(x < '0' || x > '9'){
			return false;		
		}
	}
	return true;
} 
int countTime(string s, string e){
	int startTime = 3600*((s[0]-'0')*10+s[1]-'0') + 60*((s[3]-'0')*10+s[4]-'0') + ((s[6]-'0')*10+s[7]-'0');
	int endTime = 3600*((e[0]-'0')*10+e[1]-'0') + 60*((e[3]-'0')*10+e[4]-'0') + ((e[6]-'0')*10+e[7]-'0');
	return -startTime + endTime;
}

map<string, int> mptime;
map<string, int> mpcount;
int main(){
	string s; //luu ket qua getline vao day
	vector<string> mang; //luu ket qua sau khi cat s
	mang.push_back("call");	
	int check = 1;
	int totalcall = 0;
	while(mang[0] != "#"){ 
		mang.clear();
		
		string tmp; 
		getline(cin, s);
		stringstream ss(s);
		while(ss >> tmp){
			mang.push_back(tmp);
		}
		//check phone number
		if(mang.size() >= 6){
			if(checkphonenumber(mang[1]) == 1 && checkphonenumber(mang[2]) == 1){
				mptime[mang[1]] += countTime(mang[4], mang[5]);
				mpcount[mang[1]]++;
				totalcall++;
			}
			else check = 0;
		}
		
	}
	
	//check
	string type = "x";
	while(type != "#"){
		cin >> type; 
		if(type == "#"){
			break;
		}
		else if(type == "?check_phone_number"){
			cout << check << endl; 
		}
		else if(type == "?number_calls_from"){
			string nb; 
			cin >> nb; 
			cout << mpcount[nb] << endl;
		}
		else if(type == "?number_total_calls"){
			cout << totalcall << endl; 
		}
		else if(type == "?count_time_calls_from"){
			string nb; 
			cin >> nb; 
			cout << mptime[nb] << endl;
		}
	}
}
