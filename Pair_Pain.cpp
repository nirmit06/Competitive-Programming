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
vector <ll> v(n);
vector <ll> ans;
ll count_1=0;
ll count_2=0;
for(ll i=0;i<n;i++){
    cin>>v[i];
    if(v[i]==1){
        count_1++;
    }
    else if(v[i]==2){
        count_2++;
    }
}
ll sum=0;
ll temp=count_1;
for(ll i=0;i<v.size();i++){
    if(count_1==0)
    break;
    if(v[i]==2)
    continue;
    if(v[i]==1){
        sum+=(v.size()-(i+1));
        count_1--;
    }
    else{
        sum+=count_1;
    }
    cout<<sum<<"-\n";
}

for(int i=0;i<v.size();i++){
    if(count_2==0)
    break;
    if(v[i]==1){
        temp--;
    }
    else if(v[i]==2 && count_2>0){
        sum+=((count_2-1)+temp);
        count_2--;
    }
    cout<<sum<<" "<<temp<<"--\n";
}

 cout<<sum<<"\n";
}

return 0;
}