#include <bits/stdc++.h>
using namespace std;
typdef long long ll;
int main(){
	int n, m ; 
	cin>>n>>m;
	ll arr[n];
	for(int i = 0 ; i<n;i++){
		cin>>arr[i];
	}

	queue<ll> q;
	int count_m = 0; 
	int end_p = n-1;
	while(m--){
		int curr_m;
		cin>>curr_m;
		for(;count_m<curr_m;count_m++){
			if(arr[end_p]>=q.front(){
				ans = arr[end_p];
			}

		}

	return 0 ;
}