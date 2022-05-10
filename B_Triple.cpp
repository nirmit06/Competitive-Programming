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
map <int,int> mp;
int count=0;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;
}
int ans;
for(auto x:mp){
    if(x.second>=3){
        count++;
        ans=x.first;
        break;
    }
}
if(count==0){
    cout<<-1<<"\n";
}
else{
    cout<<ans<<"\n";
}
}
return 0;
}