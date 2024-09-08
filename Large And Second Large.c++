#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        	int large=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    
	// your code goes here
	// Find Large integer in an array
	for(int i=0;i<n;i++){
	if(a[i]>large){
	large=a[i];
	}}
	
	//Find Second Large integer in an array
		int secondlarge=0;
	for(int i=0;i<n;i++){
	if(secondlarge<a[i]&&a[i]<large){
	secondlarge=a[i];
	}}
cout<<large+secondlarge<<endl;}
return 0;
} 