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

if(n==2){
    cout<<"-1"<<"\n";
}
else if(n%2){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}
else{
    cout<<"2 1 3 4 ";
    for(int i=5;i<=n;i++){
        cout<<i<<" ";
    }
}
cout<<"\n";
}
return 0;
}