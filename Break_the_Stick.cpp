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
 int n;
 cin>>n;
 int x;
 cin>>x;

 if((n%2==0 && x%2==0) || (n%2!=0 && x%2!=0)){
     cout<<"YES"<<"\n";
 }
 else{
     if(x%2==0){
         cout<<"NO"<<"\n";
     }
     else{
         cout<<"YES"<<"\n";
     }
 }
}
return 0;
}