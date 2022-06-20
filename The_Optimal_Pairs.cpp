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

 int ans=0;

 for(int i=1;i*i<=n;i++){
    if(n%i==0){
        int div1=i,div2=n/i;
        if(div2==2){
            ++ans;
        }
        else{
            ans+=2;
        }

        if(div2!=div1 && div2!=n){
            if(div1==2) ++ans;
            else ans+=2;
        }
    }
 }
 cout<<ans<<"\n";

 
}
return 0;
}