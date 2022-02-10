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
ll n;
cin>>n;
bool flag=false;

for(ll i=0;i<n;i++){
    ll price,quality;
    cin>>price>>quality;
    if(price==quality){
        flag=false;
    }
    else{
        flag=true;
        break;
    }
}
if(flag==true){
    cout<<"Happy Alex"<<"\n";
}
else{
    cout<<"Poor Alex"<<"\n";
}
return 0;
}