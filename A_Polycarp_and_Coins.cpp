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

int one,two;

one=n/3;
two=n/3;

if(n%3==1){
    one++;
}
else if(n%3==2){
    two++;
}

cout<<one<<" "<<two<<"\n";
}
return 0;
}