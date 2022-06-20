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

int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
int pos=0;
int neg=0;
for(int i=0;i<n;i++){
    if(arr[i]==1){
        pos++;
    }
    else{
        neg++;
    }
}
if(n%2!=0){
    cout<<-1<<"\n";
}
else{
    int ans1=max(neg,pos);
    int ans2=min(neg,pos);
     ans1=(ans1-ans2)/2;
    cout<<ans1<<"\n";
}
}
return 0;
}