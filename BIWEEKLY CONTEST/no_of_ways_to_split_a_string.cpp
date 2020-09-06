//https://leetcode.com/contest/biweekly-contest-34/problems/number-of-ways-to-split-a-string/

#include<bits/stdc++.h> 

using namespace std; 
//not my code 
//SOLUTION by: ADITYA SRIVASTAVA
  
int search(vector <int> &v, int x) 
{ 
    int low = 0, high = v.size()-1; 
    while (low <= high) 
    { 
        int mid = (low + high)/2; 
        if (v[mid] <= x) 
            low = mid + 1; 
        else if (v[mid] > x && v[mid-1] <= x) 
            return mid; 
        else if (v[mid] > x && mid == 0) 
            return mid; 
        else
            high = mid-1; 
    } 
    return -1; 
} 
  

int waysToPart(int arr[] ,int n) 
{ 
    int count = 0;  

    int arr2[n]; 
    arr2[0] = arr[0]; 
    
    for (int i=1; i<n; i++) 
        arr2[i] = arr2[i-1] + arr[i]; 
  
    
    int total_sum = arr2[n-1]; 
  
    int arr3[n]; 
    arr3[n-1] = arr[n-1]; 
    for (int i=n-2; i>=0; i--) 
        arr3[i] = arr3[i+1] + arr[i]; 
  
    vector <int> v; 
    for (int i=0; i<n; i++) 
        if (arr3[i] == total_sum/3) 
            v.push_back(i); 
  
    for (int i=0; i<n; i++) 
    { 
        if (arr2[i] == total_sum/3) 
        { 
            
            int res = search(v, i+1); 
  
            if (res != -1) 
                count += v.size() - res; 
        } 
    } 
  
    return count; 
} 
  

int main() 
{ 
	string str;
	getline(cin,str);
	int str_length;

	for(str_length=0;str[str_length]!='\0';str_length++);
  
    int arr[str_length] = { 0 }; 
  
    for (int i = 0; str[i] != '\0'; i++) { 
  
        
            arr[i] = arr[i] * 10 + (str[i] - 48); 
    
    } 

    

    cout<<"\n";
	
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << waysToPart(arr, n); 
    return 0; 
}