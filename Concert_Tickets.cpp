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
ll n,m;
cin>>n>>m;

vector <ll> tickets(n);
vector <ll> people(m);
set<pair<ll,ll>> s;

for(int i=0;i<n;i++){
    cin>>tickets[i];
    s.insert({tickets[i],i});
}

for(int i=0;i<m;i++){
    cin>>people[i];
}

for(int i=0;i<m;i++){
    auto x=s.lower_bound({people[i]+1,0});
    if(x==s.begin()){
        cout<<-1<<"\n";
    }
    else{
        x--;
        cout<<(*x).first <<"\n";
        s.erase(x);
    }
}



return 0;
}