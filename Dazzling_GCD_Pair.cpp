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
 ll a,b;
 cin>>a>>b;
 if(a%2==0 && b%2==0 && b-a==2){
     cout<<a<<" "<<b<<"\n";
 }
 else if(a%2!=0 && b-a>=3 && a%3==0){
     cout<<a<<" "<<a+3<<"\n";
 }
 else if(a%2!=0 && b-a>=3){
     cout<<a+1<<" "<<a+3<<"\n";
 }
 else if(a%2==0 && b-a>=3){
     cout<<a<<" "<<a+2<<"\n";
 }
 else{
     cout<<-1<<"\n";
 }
}
return 0;
}