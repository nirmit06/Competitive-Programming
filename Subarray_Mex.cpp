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
    ll n,k,x;
    cin>>n>>k>>x;

    ll count=0;
    if(k<x){
        cout<<-1<<"\n";
    }
    else{

    for(int i=0;i<n;i++){
        if(count==x){
            count=0;
        }
        cout<<count<<" ";
        count++;
    }
    cout<<"\n";
    }

}
return 0;
}