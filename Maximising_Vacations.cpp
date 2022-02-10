#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
ll t;
cin>>t;
while(t--){
   ll n,x; cin>>n>>x;
   string s; cin>>s;

   vector<int> next_1(n+1),suf(n+1);
    ll pos=n,count_0=0,vac=0;

   for(int i=n-1;i>=0;i--){
       next_1[i]=pos;
       if(s[i]=='1'){
           count_0=0;
           pos=i;
       }
       else{
           count_0++;
           if(count_0==x){
               vac++;
               count_0=0;
           }
       }
       suf[i]=vac;
   }

   ll ans=suf[0];
   count_0=vac=0;

   for(int i=0;i<n;i++){
       if(s[i]=='1'){
           if(next_1[i]>i+x-1-count_0){
               ans=max(ans,vac+1+suf[i+x-count_0]);
           }
       }
       else{
            count_0++;
           if(count_0==x){
               vac++;
               count_0=0;
           }
       }
   }
   cout<<ans<<"\n";

}
return 0;
}