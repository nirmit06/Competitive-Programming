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
ll n,q;
cin>>n>>q;
int arr[n];
map<int,int> mp;

for(int i=0;i<n;i++){
    cin>>arr[i];
    if(mp[arr[i]]==0){
        mp[arr[i]]=i+1;
    }
}

while(q--){
    int t;
    cin>>t;
    int ans=mp[t];
    cout<<mp[t]<<" ";

    for(auto x: mp){
        if(x.second<ans){
            mp[x.first]=x.second+1;    
        }
    }
    mp[t]=1;
}
cout<<"\n";

return 0;
}