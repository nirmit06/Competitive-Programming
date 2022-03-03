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
ll mini=LONG_LONG_MAX;
ll count=0;
vector <ll> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    }

 for(int i=n-1;i>=0;i--){
    if(v[i]>mini){
        count++;
       
    }
     mini=min(mini,v[i]);
}

cout<<count<<"\n";
}
return 0;
}