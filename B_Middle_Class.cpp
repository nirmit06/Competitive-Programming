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
int t;
cin>>t;
while(t--){
    ll n,x;
    cin>>n>>x;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n,greater<ll>());

    ll sum=0;
    ll count_of_people=1;
    ll count=0;
    for(ll i=0;i<n;i++){
        sum+=arr[i];
        if(sum<x){
            break;
        }
        else if(sum>=x*(count_of_people)){
            count++;
            count_of_people++;
        }
        else{
            break;
        }
        
    }

    cout<<count<<"\n";
}
return 0;
}