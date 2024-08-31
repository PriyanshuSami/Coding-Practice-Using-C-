#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int n,x,m,y;
cin>>n;
while(n--){
    cin>>x>>y;
    m=(x-y)/4;
    if(x<=y)
    cout<<"0"<<endl;
else if((x-y)%4==0)
cout<<m<<endl;
else
cout<<m+1<<endl;
    
}return 0;
}
