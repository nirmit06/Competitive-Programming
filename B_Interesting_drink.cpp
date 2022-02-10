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
ll n;
cin>>n;

vector <ll> v1(n);

for(ll i=0;i<n;i++){
    cin>>v1[i];
}

ll q;
cin>>q;

sort(v1.begin(),v1.end());

for(ll i=0;i<q;i++){
    ll coins;
    cin>>coins;

    if(coins>=v1[n-1]){
        cout<<n<<"\n";
    }
    else if(coins<v1[0]){
        cout<<0<<"\n";
    }
    else{
        auto x=upper_bound(v1.begin(),v1.end(),coins);
        ll answer=x-v1.begin();
        cout<<answer<<"\n";
    }
}

return 0;
}