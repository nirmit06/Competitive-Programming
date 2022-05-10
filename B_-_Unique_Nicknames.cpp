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
    int n;
    cin>>n;
    vector<pair<string,string>> vp(n);
    map<string,int> m;
    for(int i=0;i<n;i++){
        string s1,s2;
        cin>>s1>>s2;
        vp[i].first=s1;
        vp[i].second=s2;
        m[s1]++;
        m[s2]++;
    }

int i=0;
for(auto x:m){
    if( )
}

}
return 0;
}