#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
ll n;
cin>>n;

ll power_of_five=5;
ll ans=0;
while(power_of_five<=n){
ans+=(n/power_of_five);
power_of_five*=5;
}

cout<<ans;


return 0;
}