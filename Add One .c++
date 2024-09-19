#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int x = s.length();
for(int i=x-1;i>=0;i--){
if(s[i]=='9'){
s[i]='0';
}
else{
s[i]=s[i]+1;
break;
}
}
if(s[0]=='0'){
    s='1'+ s;
}
cout<<s<<endl;}
return 0;}