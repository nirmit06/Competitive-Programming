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
while (t--)
{
  
string s;
    cin>>s;
    unordered_map<ll,ll>mpp;
    ll n=s.length();
    for (int i=0;i<n;i++)
    {
        mpp[(ll)(s[i]-'0')]++;
    }
    ll ans=LONG_LONG_MAX;
    bool ok=false;
    if(mpp[0]>1)
    {
        ll c=0;ll in;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0'&&c>0)
            {
                in=i;
                ok=true;
                break;
                c++;
            }
            else if(s[i]=='0')c++;
        }
        if(ok){
        in=n-in-2;
        ans=min(ans,in);}
    }
    ok=false;
    if(mpp[0]>0&&mpp[5]>0)
    {
        ll c=0;ll in;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='5'&&c>0)
            {
                in=i;
                ok=true;
                break;
                c++;
            }
            else if(s[i]=='0')c++;
        }
        if(ok){
        in=n-in-2;
        ans=min(ans,in);}
    }
    ok=false;
    if(mpp[7]>0&&mpp[5]>0)
    {
        ll c=0;ll in;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='7'&&c>0)
            {
                in=i;
                ok=true;
                break;
                c++;
            }
            else if(s[i]=='5')c++;
        }
        if(ok){
        in=n-in-2;
        ans=min(ans,in);}
    }
    ok=false;
    if(mpp[2]>0&&mpp[5]>0)
    {
        ll c=0;ll in;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='2'&&c>0)
            {
                in=i;
                ok=true;
                break;
                c++;
            }
            else if(s[i]=='5')c++;
        }
        if(ok){
        in=n-in-2;
        ans=min(ans,in);}
    }
    if(mpp[0]>0)
    {
        ans=min(ans,n-mpp[0]);
    }
    cout<<ans<<"\n";
}
return 0;
}