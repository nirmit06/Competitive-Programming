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
ll a,b,c;
cin>>a>>b>>c;


cout<<max(0LL,(max(b,c)+1-a))<<" "<<max(0LL,max(c,a)+1-b)<<" "<<max(0LL,max(a,b)+1-c)<<"\n";
}
return 0;
}