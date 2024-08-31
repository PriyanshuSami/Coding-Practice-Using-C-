#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,x,y;
	cin>>n;
	while(n--){
	    cin>>x>>y;
	    if(x<y)//conditon 1 if bike is fast then car
	    cout<<"BIKE"<<endl;
	    else if(x==y)//conditon 2 if both take same time to reach
	    cout<<"SAME"<<endl;
	    else//condition 3 car is fast then bike
	    cout<<"CAR"<<endl;
	}
return 0;
}

