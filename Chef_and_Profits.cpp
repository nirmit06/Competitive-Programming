#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
    ll x,y,z;
    cin>>x>>y>>z;
    ll initial=x*y;
    ll profit=(x*z)-initial;

    cout<<profit<<"\n";
}
return 0;
}