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

string s;
cin>>s;
unordered_map<char,int>mp;

for(int i=0;i<n;i++){

}

for(auto x:mp){
    cout<<x.second<<" ";
}
cout<<"\n";
}
return 0;
}