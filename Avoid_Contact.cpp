#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
ll t;
cin>>t;
while(t--){
    ll x,y;
    cin>>x>>y;
    // if(y==0){
    //     cout<<x<<"\n";
    // }
    // else if(x==y){
    // cout<<y+(y-1)<<"\n";
    // }
    // else{
        cout<<2*y+(x-y)<<"\n";
    // }
}
return 0;
}