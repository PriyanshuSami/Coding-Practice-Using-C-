#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,x,y,z;
	cin>>n;
	while(n--){
	 cin>>x>>y>>z;
	 if(x<=y&&z<=y){
	 if(x>=z||z>=x){
	 cout<<"YES"<<endl;}
	     else{
	         cout<<"NO"<<endl;
	     }
	 }
	 else{
	 cout<<"No"<<endl;}
	 }return 0;

}
