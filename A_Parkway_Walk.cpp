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
ll n,m;
cin>>n>>m;
ll sum=0;
ll dist[n];
for(ll i=0;i<n;i++){
    cin>>dist[i];
    sum+=dist[i];
}

if(sum<=m){
    cout<<0<<"\n";
}
else{
    cout<<sum-m<<"\n";
}


}
return 0;
}