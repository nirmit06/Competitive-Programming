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
int n,m;
cin>>n>>m;
vector <ll> v(n);

for(ll i=0;i<n;i++){
    
    cin>>v[i];
}
if(m<=n){
    cout<<"NO"<<"\n";
}
else{
ll sum=0;

sort(v.begin(),v.end());

for(ll i=0;i<n-1;i++){
    
    m-=(v[i]+1);
}

m-=((2*v[n-1]));

if(m>=0){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}
}
}
return 0;
}