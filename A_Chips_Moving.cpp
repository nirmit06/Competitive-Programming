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
ll n;
cin>>n;

ll odd=0;
ll even=0;
for(ll i=0;i<n;i++){
    int x;
    cin>>x;
    if(x&1){
        odd++;
    }
    else{
        even++;
    }
}

cout<<min(odd,even)<<"\n";
return 0;
}