#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
char c;
cin>>c;
string s1;
cin>>s1;
string s2="";
string s3="qwertyuiop";
string s4="asdfghjkl;";
string s5="zxcvbnm,./";
if(c=='R'){
for(int i=0;i<s1.length();i++){
    if(s2.length()==s1.length()){
        break;
    }
    for(int j=0;j<10;j++){
        if(s1[i]==s3[j]){
            s2+=s3[j-1];
        }
        else if(s1[i]==s4[j]){
            s2+=s4[j-1];
        }
        else if(s1[i]==s5[j]){
            s2+=s5[j-1];
        }
    }
}
cout<<s2;
}
else if(c=='L'){
for(int i=0;i<s1.length();i++){
    if(s2.length()==s1.length()){
        break;
    }
    for(int j=0;j<10;j++){
        if(s1[i]==s3[j]){
            s2+=s3[j+1];
        }
        else if(s1[i]==s4[j]){
            s2+=s4[j+1];
        }
        else if(s1[i]==s5[j]){
            s2+=s5[j+1];
        }
    }
}
cout<<s2;
}
return 0;
}