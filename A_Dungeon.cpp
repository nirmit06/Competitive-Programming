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
ll a,b,c;
cin>>a>>b>>c;
ll k=(a+b+c)/9;
if((a+b+c)%9!=0){
    cout<<"NO"<<"\n";
}
else{
    if(min({a,b,c})>=floor((a+b+c)/9)){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}
}
return 0;
}