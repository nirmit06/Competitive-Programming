#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
string s;
cin>>s;
int count=0;

for(int i=0;i<s.length()-1;i++)
{
    for(int j=i+1;j<s.length();j++)
    {
        if(s[i]==s[j]){
           
            count++;
            break;
        }
    }
}

int final=s.length()-count;

if(final%2==0){
    cout<<"CHAT WITH HER!";
}
else{
    cout<<"IGNORE HIM!";
}
return 0;
}