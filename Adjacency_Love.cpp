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
ll arr[n];
ll sum=0;
ll even=0;
ll odd=0;

for(int i=0;i<n;i++){
cin>>arr[i];
if(arr[i]%2==0){
    even++;
}
else{
    odd++;
}
}

ll odd_a[odd];
ll even_a[even];
int j=0;
int k=0;

for(int i=0;i<n;i++){
if(arr[i]%2==0){
    even_a[j]=arr[i];
    j++;
}
else{
    odd_a[k]=arr[i];
    k++;
}
}
// ll osize=odd;
// ll esize=even;
if(odd<2 || (odd==n && odd%2!=0)){
    cout<<-1<<"\n";
}
else{
    if(odd%2==0){
    for(int i=0;i<odd;i++){
        cout<<odd_a[i]<<" ";
    }
    for(int i=0;i<even;i++){
        cout<<even_a[i]<<" ";
    }
    }
    else{
        ll temp_o,temp_e;
    for(int i=0;i<odd-1;i++){
        cout<<odd_a[i]<<" ";
    }
        cout<<even_a[0]<<" ";
        cout<<odd_a[odd-1]<<" ";
        
    for(int i=1;i<even;i++){
        cout<<even_a[i]<<" ";
    }
    }
}
cout<<"\n";
}
return 0;
}