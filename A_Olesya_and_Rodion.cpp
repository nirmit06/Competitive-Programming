#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int n,t;
cin>>n>>t;

int temp=1*t;

string s=to_string(temp);
string answer;

if(n==1 && t==10){
    answer="-1";
}
else if(n==1){
    answer=to_string(t);
}
else if(t==10){
    answer='1';
    for(int i=0;i<n-1;i++){
        answer+='0';
    }
    
}
else{
for(int i=0;i<n-1;i++)
{
    s+='0';
}
answer=s;
}

cout<<answer;
return 0;
}