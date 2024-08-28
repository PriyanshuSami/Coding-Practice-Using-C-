#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,x,y,z;
	cin>>n;
	while(n--){
	    cin>>x>>y>>z;
	    if(x+y+z>=2)
	    cout<<"Not now"<<endl;
	    else
	    cout<<"Water filling time"<<endl;
	}return 0;

}
