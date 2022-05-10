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
ll num;
cin>>num;

if(num<=1399){
    cout<<"Division 4"<<"\n";
}
else if(num<=1599 && num>=1400){
    cout<<"Division 3"<<"\n";
}
else if(num<=1899 && num>=1600){
    cout<<"Division 2"<<"\n";
}
else if(num>=1900){
    cout<<"Division 1"<<"\n";
}
}
return 0;
}