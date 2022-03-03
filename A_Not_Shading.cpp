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
int n,m,r,c;
cin>>n>>m>>r>>c;

char arr[n+1][m+1];
int count_W=0;
int count_B=0;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cin>>arr[i][j];
        if(arr[i][j]=='W'){
            count_W++;
        }
        else{
            count_B++;
        }
    }
}

int W_row=0;
int W_column=0;
int B_row=0;
int B_column=0;
int temp1=r;

    for(int j=1;j<=m;j++){
        if(arr[temp1][j]=='W'){
            W_row++;
            }
        else{
            B_row++;
        }
    }

int temp2=c;

        for(int i=1;i<=n;i++){
        if(arr[i][temp2]=='W'){
            W_column++;
            }
        else{
            B_column++;
        }
    
}

if(count_B==0){
    cout<<"-1"<<"\n";
}
else if(arr[r][c]=='B'){
    cout<<0<<"\n";
}
else if(B_column>0 || B_row>0){
    cout<<1<<"\n";
}
else{
    cout<<2<<"\n";
}
}
return 0;
}