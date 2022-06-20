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
int t=n;
vector<pair<int,int>> vp;
while(t--){
    int a,b;
    cin>>a>>b;
    vp.push_back(make_pair(a,b));
}
vector<pair<int,int>> temp;
int mn,mx;
for(int i=0;i<n-1;i++){
    int d=vp[i].first;
    if(vp[i+1].first>=vp[i].second){
        mx=vp[i+1].first;
    }
    
}
return 0;
}