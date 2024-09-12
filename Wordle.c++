#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
string t;
string s;
string m;
cin>>s>>t;
for(int i=0;i<5;i++){
if(s[i]==t[i]){
m="G";}
else{
m="B";}
cout<<m;}
cout<<endl;
}
return 0;}