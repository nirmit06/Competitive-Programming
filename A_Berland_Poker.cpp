#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,m,k;
    cin>>n>>m>>k;

    if(n/k>=m){
        cout<<m<<"\n";
    }
   else{
       int a=n/k;
       int b=ceil(1.0*(m-(n/k))/(k-1));
       cout<<a-b<<"\n";
   }
}
return 0;
}