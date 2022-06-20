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
ll a,b,n;
cin>>a>>b>>n;

ll cur=0;
int count=0;

if(a^b==0){
    cout<<0<<"\n";
}
else if(a^b>=1 && a^b<n){
    cout<<1<<"\n";
}
else{
    if(a^n-1>=1 && a^b<n){
        cout<<2<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }
}
}
return 0;
}