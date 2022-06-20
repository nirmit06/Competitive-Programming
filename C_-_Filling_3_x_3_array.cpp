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
ll h1,h2,h3,w1,w2,w3;
cin>>h1>>h2>>h3>>w1>>w2>>w3;

if(abs(h1-w1)-abs(h2-w2)-abs(h3-w3)!=0){
    cout<<0<<"\n";
}
else{
    
}
return 0;
}