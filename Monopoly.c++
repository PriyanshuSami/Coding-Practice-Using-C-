#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,w,x,y,z;
	cin>>n;
	while(n--){
	    cin>>w>>x>>y>>z;
	    if(w>x+y+z||x>w+y+z||y>w+x+z||z>w+x+y)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
return 0;
}
