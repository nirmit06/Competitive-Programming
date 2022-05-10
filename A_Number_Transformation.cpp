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
ll x,y;
cin>>x>>y;

if(x>y){
    cout<<0<<" "<<0<<"\n";
}
else{
    if(y%x==0){
        cout<<1<<" "<<y/x<<"\n";
    }
    else{
        cout<<0<<" "<<0<<"\n";
    }
}
}
return 0;
}