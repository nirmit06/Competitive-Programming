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
ll v[n];

for(ll i=0;i<n;i++){
    cin>>v[i];
}

sort(v,v+n);

ll blue=v[0]+v[1],red=v[n-1];

ll l=2,r=n-2;
bool flag=false;
while(l<r){
        if(red>blue){
            flag=true;
            break;
        }
        blue+=v[l];
        red+=v[r];
        l++,r--;  
}

if(flag || red>blue){
    cout<<"YES"<<"\n";
    }
else{
    cout<<"NO"<<"\n";
    }
}
return 0;
}