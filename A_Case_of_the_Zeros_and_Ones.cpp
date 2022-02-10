#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
ll n;
cin>>n;
string s;
cin>>s;
ll rem_0=0;
ll rem_1=0;
for(int i=0;i<n;i++){
    if(s[i]=='0'){
        rem_0++;
    }
    else{
        rem_1++;
    }
    
}
ll maximum=max(rem_0,rem_1);
ll minimum=min(rem_0,rem_1);
ll answer=maximum-minimum;

cout<<answer;
return 0;
}