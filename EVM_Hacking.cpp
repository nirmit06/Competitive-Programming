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
    ll a,b,c;
    cin>>a>>b>>c;
    ll p,q,r;
    cin>>p>>q>>r;

    ll temp1,temp2,temp3;

    temp1=p-a;
    temp2=q-b;
    temp3=r-c;

    ll maximum1=max(temp1,temp2);
    ll maximum2=max(maximum1,temp3);

    ll sum=a+b+c+maximum2;

    if(sum>((p+q+r)/2)){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}
return 0;
}