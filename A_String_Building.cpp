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
string s;
cin>>s;
bool ok=true;
for(int i=0;i<s.length();i++){
    if(s[i-1]!=s[i] && s[i]!=s[i+1]){
        ok=false;
    }
}
if(ok){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}
}
return 0;
}