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
ll combi(ll n,ll k)
{
    ll ans=1;
    k=k>n-k?n-k:k;
    ll j=1;
    for(;j<=k;j++,n--)
    {
        if(n%j==0)
        {
            ans*=n/j;
        }else
        if(ans%j==0)
        {
            ans=ans/j*n;
        }else
        {
            ans=(ans*n)/j;
        }
    }
    return ans;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll count_pos=0;
ll count_neg=0;
ll count_0=0;
for(int i=0;i<n;i++){
    ll el;
    cin>>el;
    if(el>0){
        count_pos++;
    }
    else if(el==0){
        count_0++;
    }
    else {
        count_neg++;
    }
}
// cout<<count_0<<" "<<count_neg<<" "<<count_pos<<"\n";
ll ans=combi(count_pos,2)+combi(count_neg,2);
if(count_neg<2)
ans--;
if(count_pos<2)
ans--;
cout<<ans<<"\n";
}
return 0;
}