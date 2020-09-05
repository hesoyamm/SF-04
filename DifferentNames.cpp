#include<bits/stdc++.h>
using namespace std;
#include<string>
int alag(string s,map<string,int> m ){

	std::istringstream iss(s);
	std::vector<std::string> v((std::istream_iterator<std::string>(iss)),
                                 std::istream_iterator<std::string>());
                                    
                                    
    for(int i=0; i<v.size(); i++)
	{
		m[v[i]]+=1;
	}
	map<string,int>::iterator it;
	for(it =m.begin();it!=m.end();it++){
	    
	    string name = it->first;
	    int freq = it->second;
	    if(freq>1){
	        cout<<name<<" "<<freq<<endl;
	    }
	}}
int main ()
{	
	string s ; 
	//getline 
	getline(cin,s);
	map<string,int> m;
	alag(s,m);





	return 0;


}