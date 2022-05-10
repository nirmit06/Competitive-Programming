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

ll a,b,k;
cin>>a>>b>>k;
ll count=0;
ll sum=b;
ll temp=a;
if(b<=a){
    count=0;
}
else{
while(sum>0){
    sum-=(temp*k);
    temp+=(temp*k);
    count++;
}
}
cout<<count<<"\n";
return 0;
}