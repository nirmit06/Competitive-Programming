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

bitset <64> b(n);
int count_0=0;
int pow_1;
for(int i=0;i<64;i++){
    if(b[i]==1){
        pow_1=i;
        break;
    }
    else{
        count_0++;
    }
}
int last;
for(int i=0;i<64;i++){
    if(b[i]==1){
        last=i;
    }
}

int ans=pow(2,pow_1);


if(last==pow_1 && count_0>=1){
    ans++;
}
else if(last==pow_1 && count_0==0){
    ans+=pow(2,pow_1+1);
}

cout<<ans<<"\n";
}
return 0;
}