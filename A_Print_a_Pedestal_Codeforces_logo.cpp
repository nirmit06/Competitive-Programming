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

    if(n%3==0){
        cout<<(n/3)<<" "<<(n/3)+1<<" "<<(n/3)-1<<"\n";
    }
    else if(n%3==1){
        cout<<(n/3)<<" "<<(n/3)+2<<" "<<(n/3)-1<<"\n";
    }
    else{
        cout<<(n/3)+1<<" "<<(n/3)+2<<" "<<(n/3)-1<<"\n";
    }
}
return 0;
}