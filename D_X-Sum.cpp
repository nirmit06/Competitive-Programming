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
int n,m;
     cin>>n>>m;
     int a[n][m];
     for(int i = 0;i<n;i++){
         for(int j = 0;j<m;j++){
             cin>>a[i][j];
         }
     }
     int ans = INT32_MIN;
     for(int i = 0;i<n;i++){
         for(int j = 0;j<m;j++){
             int k = i,s= j;
             int sum  = 0;
             while(k>=0 && s>=0){
                sum += a[k--][s--];
             }
                k = i,s= j;
             while(k>=0 && s<m){
                sum += a[k--][s++];
             }
              k = i,s= j;
              while(k<n && s<m){
                sum += a[k++][s++];
             }
              k = i,s= j;
              while(k<n && s>=0){
                sum += a[k++][s--];
             }
             sum = sum-3*a[i][j];
            ans = max(sum,ans);
         }
     }

     cout<<ans<<"\n";

}
return 0;
}