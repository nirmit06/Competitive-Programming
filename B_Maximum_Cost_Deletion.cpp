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
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    ll ans=a*n;
    if(b>0){
    ans+=(b*n);
    }
    else{
        int total=0;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1])
            total++;
        }
        total++;
        ans+=((total/2)+1)*b;
    }
    cout<<ans<<"\n";
}
return 0;
}