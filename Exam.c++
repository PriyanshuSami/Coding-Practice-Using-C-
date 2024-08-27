#include<bits/stdc++.h>
using namespace std;
int main(){
    float m,n,x,y,z;
    cin>>m;
    while(m--){
        cin>>x>>y>>z;
        n=x*y;
        if((z/n)*100>50){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }return 0;
}