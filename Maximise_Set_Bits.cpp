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
    ll n,k;
    cin>>n>>k;

    if(n==1){
        cout<<__builtin_popcount(k)<<"\n";
    }
    else{
        int ind;
        int sum=0;
        int i=0;
        vector <int> v;
        while(((1<<i)-1)<k){
            v.push_back((1<<i)-1);
            i++;
        }
        
        
        i=v.size()-1;
        int ans=0;
        while(k>0 && n>0 && i>=0){
            while(v[i]>k){
                i--;
            }
            if(k>=v[i]){
                ans+=(i);
                k-=v[i];
            }
            n--;
        }
        cout<<ans<<"\n";
    }
}
return 0;
}