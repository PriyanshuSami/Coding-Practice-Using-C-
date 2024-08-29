#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,p,q,r,s;
	cin>>n;
	while(n--){
	    cin>>p>>q>>r>>s;
	    if(p==q&&q==r&&r==s&&s==p&&p==0)
	    cout<<"IN"<<endl;
	    else
	    cout<<"OUT"<<endl;
	}return 0;

}
