#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,x;
	cin>>n;
	while(n--){
	    cin>>x;
	    if(0<x&&x<=50){
	        cout<<"LEFT"<<endl;
	    }else{
	        cout<<"RIGHT"<<endl;
	    }
	}return 0;

}
