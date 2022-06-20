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
map<int,int> mp;
vector <int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
}

int sum=0;
int count=0;
for(auto x:mp){
    count++;
    sum+=(x.second-1);
}

if(sum==0){
    cout<<count<<"\n";
}
else if(sum%2==0){
    cout<<count<<"\n";
}
else{
    cout<<count-1<<"\n";
}




}
return 0;
}