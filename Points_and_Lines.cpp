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
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    
ll arr1[n];
    ll arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        cin>>arr2[i];
    }

    sort(arr1,arr1+n);
    sort(arr2,arr2+n);

    ll count=1;
    // ll count2=1;
    
    for(ll i=0;i<n-1;i++){
        if(arr1[i]!=arr1[i+1] ){
            count++;
        }
        if(arr2[i]!=arr2[i+1]){
            count++;
        }
    }

    cout<<count+1<<"\n";

   
    
    // for(ll i=0;i<n;i++){
    //     cout<<arr1[i]<<" "<<arr2[i]<<"\n";
    // }
    // cout<<"\n";
}
return 0;
}
