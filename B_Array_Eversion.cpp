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

int a[n];
int b[n];
int mx=INT_MIN;
for(int i=0;i<n;i++){
    cin>>a[i];
    mx=max(mx,a[i]);
}

b[n-1]=a[n-1];

for(int i=n-2;i>=0;i--){
    b[i]=max(a[i],b[i+1]);
}

bool flag=false;
set<int> s;

for(int i=0;i<n;i++){
    if(flag==true && b[i]!=mx){
        s.insert(b[i]);
    }
    if(b[i]==mx){
        flag=true;
    }
}
cout<<s.size()<<"\n";
}
return 0;
}