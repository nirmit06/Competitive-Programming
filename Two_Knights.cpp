#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
ll n;
cin>>n;
ll all,attack,answer;
for(ll i=1;i<=n;i++){
     all=((i*i)*((i*i)-1))/2;
     attack=4*(i-1)*(i-2);
     answer=all-attack;
     cout<<answer<<"\n";
}


return 0;
}