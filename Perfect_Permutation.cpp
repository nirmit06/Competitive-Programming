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
int n,k;
cin>>n>>k;

if(n==k){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<"\n";
}
else{
    cout<<n-k+1<<" ";
    for(int i=1;i<=n-k;i++){
        cout<<i<<" ";
    }
    for(int i=n-k+2;i<=n;i++){
        cout<<i<<" ";
    }
     cout<<"\n";
}

}
return 0;
}