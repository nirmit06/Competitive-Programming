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
    ll n,m;
    cin>>n>>m;
    int arr[n][m];
    ll ind1,ind2;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(mx<arr[i][j]){
            mx=arr[i][j];
            ind1=i+1;ind2=j+1;
            }
        }
    }
   
   ll r=max(ind1,n-ind1+1);
   ll c=max(ind2,m-ind2+1);
   cout<<r*c<<"\n";


}
return 0;
}