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
int t;
cin>>t;
while(t--){
ll n;
cin>>n;

vector <ll> v(n);
ll sum=0;
ll maxi=LONG_LONG_MIN;
for(int i=0;i<n;i++){
    cin>>v[i];
    sum+=v[i];
    maxi=max(v[i],maxi);
}

sum-=maxi;

if(sum==0 && maxi==0){
    cout<<0<<"\n";
    continue;
}

if(sum>=maxi){
    cout<<1<<"\n";
}
else{
    cout<<maxi-sum<<"\n";
}





}
return 0;
}