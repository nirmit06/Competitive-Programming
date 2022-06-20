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

string a;
cin>>a;
string b;
cin>>b;

map<char,int> mp;

for(int i=0;i<n;i++){
    if(a[i]!=b[i])
    mp[b[i]]++;
}

int ans=0;
for(auto x:mp){
    if(x.second>=1){
        ans++;
    }
}
cout<<ans<<"\n";
}
return 0;
}