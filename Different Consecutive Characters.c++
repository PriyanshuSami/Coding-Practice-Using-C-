#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    string s;
	        cin>>s;
	    int c=0;
	    for(int i=0;i<n;i++){
	        if(s[i]==s[i-1]){
	      c++;
	               }
	           }
	        cout<<c<<endl;}
	    
	return 0;

}
