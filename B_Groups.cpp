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
int arr[n][5];
for(int i=0;i<n;i++){
    for(int j=0;j<5;j++){
        cin>>arr[i][j];
    }
}

bool found=false;
for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
        int d1=0,d2=0,d3=0;
        for(int k=0;k<n;k++){
            if(arr[k][i] && arr[k][j]){
                d3++;
            }
            else if(arr[k][i]){
                d1++;
            }
            else if(arr[k][j]){
                d2++;
            }
        }
        if(d1+d2+d3==n && d1<=n/2 && d2<=n/2){
            found=true;
        }
    }
   
}

cout<<(found?"YES":"NO")<<"\n";
}
return 0;
}