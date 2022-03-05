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
ll n;
cin>>n;
ll arr[n];

ll count_1=0;
ll count_0=0;

for(ll i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==1){
        count_1++;
    }
    else if(arr[i]==0){
        count_0++;
    }
}
cout<<count_1*(1LL<<count_0)<<"\n";
}
return 0;
}