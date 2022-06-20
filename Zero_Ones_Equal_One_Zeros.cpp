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

    string st="";

    if(n%2==0){
        st+='1';
        for(int i=0;i<n-2;i++){
            st+='0';
        }
        st+='1';

        cout<<st<<"\n";
    }
    else{
        bool ok=0;
        for(int i=0;i<n;i++){
            if(ok==0)
            st+='0',ok=1;
            else
            st+='1',ok=0;
        }
        cout<<st<<"\n";
    }
}
return 0;
}