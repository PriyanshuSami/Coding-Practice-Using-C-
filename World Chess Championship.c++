#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int x,t;
string y;
cin>>t;
while(t--){
    cin>>x;
    cin>>y;
    int C=0;
    int N=0;
    int D=0;
    for(int i=0;i<14;i++){
        if(y[i]=='C'){
          C++;  
        }
        else if(y[i]=='N'){
            N++;
        }
        else if(y[i]=='D'){
            D++;
        }
    }
if(C>N){
        cout<<60*x<<endl;
    }
    else if(C==N){
        cout<<55*x<<endl;
    }else{
        cout<<40*x<<endl;
    }
}return 0;
}
