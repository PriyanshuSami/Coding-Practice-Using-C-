#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    
	    if(x<=100){
	        cout<<x<<endl;
	    }
	    else if(100<x && x<=1000){
	        x=x-25;
	        cout<<x<<endl;
	    }
	    else if(1000<x && x<=5000){
	        x=x-100;
	        cout<<x<<endl;
	    }
	    else{
	        x=x-500;
	        cout<<x<<endl;
	    }
	}
	return 0;
}