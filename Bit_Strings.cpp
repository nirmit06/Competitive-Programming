#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define ln '\n'
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int n;

cin>>n;
int ans=1;
for(int i=0;i<n;i++){
    ans*=2;
    ans%=mod;
}
cout<<ans<<"\n";
return 0;
}