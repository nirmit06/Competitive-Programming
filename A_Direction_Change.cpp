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
int n,m;
cin>>n>>m;

if(n==1 && abs(n-m)>1 || m==1 && abs(n-m)>1)
    cout<<-1<<"\n";
else{
    --n;
    --m;
    ll sum=0;
    int com;
    n>m?com=m:com=n;
    int left;
    if(n!=0 || m!=0){
    left=abs(n-m);
    if(left&1)
    sum+=(((left*2)-1)+(com*2));
    else
    sum+=((left*2)+(com*2));
    }
    cout<<sum<<"\n";
}
}
return 0;
}