#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
    ll a,b;
    cin>>a>>b;
    
    if((a+b)%3==0 && max(a,b)<=2*min(a,b)){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }


}
return 0;
}