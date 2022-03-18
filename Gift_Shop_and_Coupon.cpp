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
ll n,k;
cin>>n>>k;

vector <ll> v(n);

for(int i=0;i<n;i++){
    cin>>v[i];
}

if(v[n-1]%2!=0){
    if(v[n-2]==v[n-1]-1){
        v[n-2]=v[n-2]/2;
    }
}

ll count=0;
ll sum=0;
ll i=0;
while(sum<k && count!=n){
    sum+=v[i];
    count++;
    i++;
}

cout<<count<<"\n";
}
return 0;
}