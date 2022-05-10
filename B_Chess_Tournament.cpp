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
string s;
cin>>s;
int count_2=0;

for(int i=0;i<n;i++){
    if(s[i]=='2')
    count_2++;
}

if(count_2==1 || count_2==2){
    cout<<"NO"<<"\n";
}
else{
    ll x=1;
    cout<<"YES"<<"\n";
    char arr[n][n];
    for(int i=0;i<n;i++){
        x=1;
        for(int j=i;j<n;j++){
            if(i==j){
                arr[i][j]='X';
            }
            else if(s[i]=='1'){
                arr[i][j]='=';
                arr[j][i]='=';
            }
            else{
                if(x==1 && s[j]=='2')
                arr[i][j]='+',arr[j][i]='-',x=2;
                else
                arr[i][j]='-',arr[j][i]='+';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
}

}


return 0;
}