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

 string s=to_string(n);
 int ans=0;
 int temp=n;
 for(int i=0;i<s.length();i++){
     ans+=(temp%10);
     temp/=10;
 }

 int ans1=0;
 int temp2=n+1;
 string s1=to_string(n+1);
 for(int i=0;i<s1.length();i++){
     ans1+=(temp2%10);
     temp2/=10;
 }
 
// cout<<ans<<" "<<ans1<<"\n";
 if(ans%2 != ans1%2){
     cout<<n+1<<"\n";
 }
 else{
     cout<<n+2<<"\n";
 }
}
return 0;
}