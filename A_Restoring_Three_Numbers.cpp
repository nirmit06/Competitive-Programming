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
vector <ll> v(4);
for(int i=0;i<4;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());

for(int i=0;i<3;i++){
    cout<<v[3]-v[i]<<" ";
}
return 0;
}