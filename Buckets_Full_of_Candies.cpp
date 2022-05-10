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
ll n,m,l;
cin>>n>>m>>l;

ll last=l+(n-1);
ll mini=l;

ll left=m%last;

if(left<mini){
    cout<<left<<"\n";
}
else{
    ll mn=INT_MAX;
    bool ok=false;
    for(int i=last-1;i>=mini;i--){
        if(left%i==0 || left==0)
        {
            ok=true;
            break;
        }
        else if(i<=left){
            left-=i;
        }
        // cout<<left<<"--\n";
    }
    if(ok)
    cout<<0<<"\n";
    else
    cout<<left<<"\n";
}

}
return 0;
}