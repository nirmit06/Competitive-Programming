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
int n,k;
cin>>n>>k;
vector<ll> waste;
ll ans=0;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    ans+=x/k;
    waste.push_back(x%k);
}

ll s=0,e=n-1;

sort(waste.begin(),waste.end());

while(s<e){
    if(waste[s]+waste[e]>=k){
        ans++;
        s++;
        e--;
    }
    else{
        s++;
    }

}
cout<<ans<<"\n";
}
return 0;
}