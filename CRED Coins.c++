#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,x,y;
	cin>>n;
	while(n--){
	    cin>>x>>y;
	    if(x*y>=100)
	    cout<<(x*y)/100<<endl;
	    else
	    cout<<0<<endl;
	}return 0;

}
