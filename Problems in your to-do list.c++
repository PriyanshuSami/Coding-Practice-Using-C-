#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m;
    while(m--){
        cin>>n;
        int a[n];
         int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=1000){
            count++;}}
        cout<<count<<endl;
	}
        return 0;
    }