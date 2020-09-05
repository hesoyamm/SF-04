#include<bits/stdc++.h>
using namespace std;
//we have find the first non-repeating character
char non_repeating_character(string str){

	map<char,int>frequency;
	for(int i = 0 ; i<str.length();i++){
		char count_char = str[i];
		frequency[count_char]++;
	}

	for(int i =0;i<str.length();i++){
			if(frequency[str[i]]==1){
				return str[i];
			}

	}
	return str[0];

}	




int main(){

	string str;
	cin>>str;
	non_repeating_character(str);
}