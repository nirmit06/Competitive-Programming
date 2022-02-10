#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
ll n;
cin>>n;

ll arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

sort(arr,arr+n);
ll count=1;
for(int i=0;i<n;i++){
    if((arr[i]!=arr[i+1]) && (i+1)!=n){
        count++;
    }
}

cout<<count<<"\n";

return 0;
}