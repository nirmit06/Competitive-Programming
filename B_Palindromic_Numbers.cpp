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

ll sum=0;
bool flag=0;

char a[n];
int b[n],c[n]={0};

for(int i=0;i<n;i++){
    cin>>a[i];
    b[i]=(int)a[i]-48;
    if(i==0 && b[i]==9) 
    flag=true;
}

if(flag==0){
    for(int i=0;i<n;i++){
        cout<<9-b[i];
    }
    cout<<"\n";
}
else{
    c[n-2]=1;
    c[0]=11;
    c[n-1]=1;
    
    for(int i=n-1;i>0;i--){
        if(c[i]>=b[i]){
            c[i]=c[i]-b[i];
        }
        else{
            c[i]=c[i]-b[i]+10;
            c[i-1]--;
        }
    }
    c[0]=c[0]-9;
    for(int i=0;i<n;i++){
        cout<<c[i];
    }
    cout<<"\n";
}

}
return 0;
}