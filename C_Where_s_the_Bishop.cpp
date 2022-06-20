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
char arr[8][8];

for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        cin>>arr[i][j];
    }
}

for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        if(arr[i-1][j-1]=='#' && arr[i-1][j+1]=='#' && arr[i+1][j+1]=='#' && arr[i+1][j-1]=='#'){
            cout<<i+1<<" "<<j+1<<"\n";
        }
    }
}

}
return 0;
}