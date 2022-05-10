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
int n,a,b;
cin>>n>>a>>b;

if(abs(a-b)>=3 || a==b){
    cout<<0<<"\n";
}
else if((abs(a-b)==1 && (a==1 || b==1)) || (abs(a-b)==1 && (a==n || b==n))){
    cout<<1<<"\n";
}
else if(abs(a-b)==2){
    cout<<1<<"\n";
}
else{
    cout<<2<<"\n";
} 
}
return 0;
}