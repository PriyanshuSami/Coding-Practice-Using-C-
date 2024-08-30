#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y,n,a,b;
	cin>>n;
	while(n--){
	    cin>>a>>b>>x>>y;
	     a=a*b;
	    x=x*y;
	    if(x>=a)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;

}
