#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	float n,x,y;
	cin>>n;
	while(n--){
	    cin>>x>>y;
	    float m=(y/x)*100;
	    if(m>=50)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    
	}
	return 0;

}
