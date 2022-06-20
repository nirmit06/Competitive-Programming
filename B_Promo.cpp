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
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
ll n,q;
cin>>n>>q;

vector <ll> price(n);

for(ll i=0;i<n;i++){
    cin>>price[i];
}
sort(price.rbegin(),price.rend());
ll sum=0;
vector <ll> prefix;
prefix.push_back(0);
for(ll i=0;i<n;i++){
    sum+=price[i];
    prefix.push_back(sum);
}
while(q--){
ll x,y;
cin>>x>>y;
if(x!=y)
cout<<prefix[x]-prefix[x-y]<<"\n";
else{
    cout<<prefix[x]<<"\n";
}
}
return 0;
}