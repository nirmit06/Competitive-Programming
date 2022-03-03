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

vector<pair<int,int>> p;

for(int i=1;i<=n;i++){
    int element;
    cin>>element;
    p.push_back(make_pair(element,i));
}

sort(p.begin(),p.end());

for(auto x: p){
    cout<<x.second<<" ";
}
return 0;
}