#include<bits/stdc++.h>
using namespace std;
vector<int> getVoters(int arr[],int n){
	sort(arr,arr+n);
	vector<int> voters;
	for(int i =0 ; i<n;){
		int count = 0 ; 
		int j =i ; 
		while(j<n && (arr[j]==arr[i])){
			count++;
			j++;
		}
		if(count>=2){
			voters.push_back(arr[i]);
		}
		i= j ;

	}
	return voters;

}
int main(){
	int size1,size2,size3;
	cout<<"size of aLL  three"<<endl;
	cin>>size1>>size2>>size3;
	int size = size1+size2+size3;
	int arr[size];
	cout<<"input array elements";
	for(int i = 0 ; i<size;i++)
	{
		cin>>arr[size];
	}
	vector<int> voters = getVoters(arr,size);
	cout<<voters.size()<<endl;
	for(int i =0 ;i<voters.size();i++){
		cout<<voters[i]<<endl;
	}
	return 0 ;

		

	}