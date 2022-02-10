#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
ll n,m;
cin>>n>>m;

map <string,string> mp;

string a,b;

for(int i=0;i<m;i++){
    cin>>a>>b;
    if(a.length()>b.length()){
        mp[a]=b;
    }
    else{
        mp[a]=a;
    }
}

for(int i=0;i<n;i++){
    string s;
    cin>>s;
    cout<<mp[s]<<" ";
}




return 0;
}