#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b;
	cin>>n;
	while(n--){
		cin>>a>>b;
		if(a%6>0){
			cout<<((a/6)+1)*b<<endl;
		}
		else{
			cout<<(a/6)*b<<endl;
		}
	}return 0;
	}