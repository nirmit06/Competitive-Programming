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
int l,r,d,u;
cin>>l>>r>>d>>u;

int x,y,xl,yd,xr,yu;
cin>>x>>y>>xl>>yd>>xr>>yu;
int ans=1;
if(r-l > xr -x || l-r >x-xl){
    ans=0;
}
if(u-d > yu-y || d-u>y-yd){
    ans=0;
}
if(xl==xr && (l+r)>0){
    ans=0;
    }
if(yd==yu && (d+u)>0){
    ans=0;
    }

if(ans==1){
    cout<<"Yes"<<"\n";
}
else{
    cout<<"No"<<"\n";
}
}
return 0;
}