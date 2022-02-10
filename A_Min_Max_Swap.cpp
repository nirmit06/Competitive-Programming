#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
     ll a[n];
     ll b[n];
    int element;
    int max1=INT_MIN;
    ll temp;
     for(int i=0;i<n;i++){
         cin>>element;
         a[i]=element;
         if(a[i]>max1){
             max1=element;
             temp=i;
         } 
         
     }

    
     for(int i=0;i<n;i++){
         cin>>element;
         b[i]=element;
     }

    ll answer=max1*(b[temp]);
    cout<<answer<<"\n";

     
}
return 0;
}