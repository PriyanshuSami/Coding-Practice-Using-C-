#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;  cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i =0; i<n; i++){
            cin>>a[i];
        }
        int c =0;
        int min = (int)*min_element(a, a + n);
        for(int i =0; i<n; i++){
            if(a[i]==min){
                c++;
            }
        }
        cout<<n-c<<endl;
        
    }
    return 0;
}