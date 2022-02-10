#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
ll n,x;
cin>>n>>x;
ll count=0;
for(ll i=1;i<=n;i++){
   if(x % i == 0 && x / i <= n){
       count++;
   }
}

cout<<count<<"\n";
return 0;
}