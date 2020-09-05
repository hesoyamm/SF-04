#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
    int count_customer;
    cin>>count_customer;
   	int arrival[count_customer];
    for(int i = 0 ; i<sizeof(arrival) / sizeof(arrival[0]);i++){
		cin>>arrival[i];	
    }
    int departure[count_customer];
    for(int i = 0;i<sizeof(departure) / sizeof(departure[0]);i++){
        cin>>departure[i];
    }
    sort(arrival,arrival+count_customer);
    sort(departure,departure+count_customer);
    
    int requirement = 1;
    int result = 1; 
    
    int i = 1;
    int j = 0;
	while(i<count_customer&&j<count_customer){
        if(arrival[i]<=departure[j]){
            requirement ++;
        	i++;
        
        if(requirement>result)
        
				result = requirement;
        
        
        }
     
        else
      { 
          requirement--; 
          j++; 
      }
        }
        
        cout<<result;
    
    
        
    
    
}