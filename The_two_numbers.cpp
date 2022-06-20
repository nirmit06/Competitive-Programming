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
ll n;
cin>>n;

if(n==2){
    cout<<0<<"\n";
}
else if(n%2!=0){
    cout<<((n-1)/2)*((n+1)/2)-1<<"\n";
}
else{
    if((n/2-1)%2==1){
        cout<<((n/2-1)*(n/2+1))-1<<"\n";
    }
    else{
        cout<<((n/2-2)*(n/2+2))-1<<"\n";
    }
}
}
return 0;
}