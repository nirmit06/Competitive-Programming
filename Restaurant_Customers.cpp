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
int n;
cin>>n;

    vector<pair<int,int>>p;

    for(int i=0;i<n;i++){
    int start,end;
    cin>>start>>end;
    p.push_back({start,1});
    p.push_back({end,-1});
    }
    sort(p.begin(),p.end());

    int actualCustomers=0;
    int maxCustomers=0;
    for(int i=0;i<n;i++){
        actualCustomers+=p[i].second;
        maxCustomers=max(maxCustomers,actualCustomers);
    }
    cout<<maxCustomers;
return 0;
}