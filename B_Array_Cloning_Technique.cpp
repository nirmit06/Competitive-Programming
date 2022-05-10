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
map<int,int> m;
for(int i=0;i<n;i++){
    cin>>v[i];
    m[v[i]]++;
}
int maxi=INT_MIN;

for(auto x:m){
    if(x.second>maxi)
    maxi=x.second;
}

if(n==1 || maxi==n){
    cout<<0<<"\n";
}
else {
    int ans=1;
    int temp=maxi;
    while(temp<v.size()){
        temp*=2;
        ans++;
    }
    cout<<ans*2<<"\n";
}
}
return 0;
}