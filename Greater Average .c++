#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	float n,a,b,c;
	cin>>n;
	while(n--){
	    cin>>a>>b>>c;
	    if((a+b)/2>c){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}return 0;

}
