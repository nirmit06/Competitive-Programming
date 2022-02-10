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
    ll a,b;
    cin>>a>>b;
    if(b!=1){
        cout<<"YES"<<"\n";
        cout<<(a*b)<<" "<<a<<" "<<(b+1)*a<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }

}
return 0;
}