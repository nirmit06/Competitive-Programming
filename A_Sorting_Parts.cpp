#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
// typedef pair<ll, ll> pll;
// typedef vector<ll> vll;
// typedef vector<pll> vpll;
// typedef vector<string> vs;
// typedef unordered_map<ll,ll> umll;
// typedef map<ll,ll> mll;

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
vector <ll> v1(n);
for(int i=0;i<n;i++){
    ll element;
    cin>>element;
    cin>>v1[i];
}


vector <ll> v=v1;

sort(v.begin(),v.end());

for(int i=0;i<n;i++){
    cout<<v[i]<<" "<<v1[i]<<"\n";
}

if(v1==v){
    cout<<"NO"<<"\n";
}
else{
    cout<<"YES"<<"\n";
}
}
return 0;
}