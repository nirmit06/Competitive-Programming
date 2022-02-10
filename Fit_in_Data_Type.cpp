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
ll t;
cin>>t;
while(t--){
    ll n,x;
    cin>>n>>x;

    if(x<=n){
        cout<<x<<"\n";
    }
    else{
        cout<<x%(n+1)<<"\n";
    }
}
return 0;
}