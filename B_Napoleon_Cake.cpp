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

    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int temp=a[n-1];
    int b[n]={0};

    for(int i=n-1;i>=0;i--){
        if(a[i]!=0 || temp!=0){
            b[i]=1;
            temp=max(a[i],temp);
            temp--;
        }
        else{
            temp=a[i];
        }
    }

    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<"\n";
}
return 0;
}