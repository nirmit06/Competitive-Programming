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
int n,m;
cin>>n>>m;
vector<pair<string,int>> v;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    for(int i=1;i<=m;i+=2){
        char temp=s[i]-65;
        s[i]=90-temp;
    }
    v.push_back(make_pair(s,i+1));
}

sort(v.begin(),v.end());

for(int i=0;i<n;i++){
    cout<<v[i].second<<" ";
}
return 0;
}