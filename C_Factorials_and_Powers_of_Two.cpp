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

vector <ll> factorial(n);
vector <ll> square(n);

for(int i=1;i*i<=n;i++){
    square[i-1]=i*i;
}
ll fact=1;
int j=1;
while(fact*j<=n){
    fact*=j;
    factorial[j-1]=(fact);
    j++;
}

for(int i=0;i<7;i++){
    cout<<square[i]<<" ";
}
cout<<endl;
for(int i=0;i<7;i++){
    cout<<factorial[i]<<" ";
}
cout<<endl;
}
return 0;
}