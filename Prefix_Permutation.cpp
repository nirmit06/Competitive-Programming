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
int n,k;
cin>>n>>k;

vector <ll> v(k);
for(int i=0;i<k;i++){
    cin>>v[i];
}
ll start=v[0];
while(start>0){
    cout<<start<<" ";
    start--;
}
int i=1;
start=v[0];
while(i<k){
    ll temp=v[i];
while(temp>start){
    cout<<temp<<" ";
    temp--;
}
start=v[i];

i++;
}

cout<<"\n";


}
return 0;
}