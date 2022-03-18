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
int n;
cin>>n;

if(n==1){
    cout<<1<<"\n";
    cout<<1<<' '<<1;
}
else{
    cout<<n/2<<"\n";
if(n%2){
    cout<<3<<' '<<1<<' '<<2<<' '<<n<<"\n";
}
else{
    cout<<2<<' '<<1<<' '<<2<<"\n";
}
for(int i=4;i<=n;i+=2){
    cout<<2<<' '<<i-1<<' '<<i<<"\n";
}
}

}
return 0;
}