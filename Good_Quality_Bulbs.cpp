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
ll n,x;
cin>>n>>x;

ll total=n*x;
ll sum=0;
for(ll i=0;i<n-1;i++){
    int el;
    cin>>el;
    sum+=el;
}
ll check=total-sum;
// cout<<total<<" "<<sum<<"\n";
if(check>0)
cout<<check<<"\n";
else
cout<<0<<"\n";
}
return 0;
}