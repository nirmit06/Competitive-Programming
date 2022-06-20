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

    int x=(n%10==0?(n/10-1):n/10);
    int y=(m%10==0?(m/10-1):m/10);

    cout<<abs(x-y)<<"\n";
}
return 0;
}