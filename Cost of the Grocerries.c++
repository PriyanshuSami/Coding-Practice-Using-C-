#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int a[100];
	int b[100];
	
		 	cin>>t;
	while(t--){
	   int n;
	   int m;
int sum=0;
	   cin>>n;
	   	   cin>>m;
	   for(int i=0;i<n;i++){
	       cin>>a[i];
	     
	   }for(int j=0;j<n;j++){
	       cin>>b[j];
	    
	   }
	   for(int i=0;i<n;i++){
	       if(a[i]>=m){
sum=sum+b[i];
	   }    
	}   cout<<sum <<endl;  }     
	return 0;
}
