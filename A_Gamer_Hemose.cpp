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

ll n,H;
cin>>n>>H;

vector <ll> damage(n);

for(ll i=0;i<n;i++){
    cin>>damage[i];
}
sort(damage.begin(),damage.end());

if(H<=damage[n-1]){
    cout<<1<<"\n";
}
else{
    ll c=0;
    c+=2*(H/(damage[n-1]+damage[n-2]));
    if(H%(damage[n-1]+damage[n-2])==0) 
    {c+=0;}
    else if(H%(damage[n-1]+damage[n-2])<=damage[n-1]) 
    {c++;}
    else 
    {c+=2;}
    cout<<c<<"\n";
}

}
return 0;
}