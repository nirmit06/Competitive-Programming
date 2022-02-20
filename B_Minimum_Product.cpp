#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
ll ok(ll a,ll b,ll x,ll y,ll n){
    ll d1=a-x;
    ll d2=b-y;
    ll c1=min(d1,n);
    a-=c1;
    n-=c1;
    ll c2=min(d2,n);
    b-=c2;
    n-=c2;
    ll answer=a*b;
    return answer;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
ll a,b,x,y,n;
cin>>a>>b>>x>>y>>n;
ll answer=min(ok(a,b,x,y,n),ok(b,a,y,x,n));
cout<<answer<<"\n";
}
return 0;
}