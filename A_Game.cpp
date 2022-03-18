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
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int i=0;
int j=n-1;

while(i<n && arr[i])
i++;


while(j>=0 && arr[j])
j--;

if(j<0){
    cout<<0<<"\n";
}
else {
    cout<<j-i+2<<"\n";
}
}
return 0;
}