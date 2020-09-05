#include<bits/stdc++.h>
using namespace std;
int main(){

	string str;
	cout<<"input";
	getline(cin,str);
	set<char> string;
	for(int i = 0;i<str.length();i++){
		string.insert(str[i]);
	}
	for(auto it  =string.begin();it!= string.end();it++){
		cout<<*it<<" ";
	}
	return 0 ;





}