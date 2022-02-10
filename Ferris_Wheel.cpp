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
ll n,x;
cin>>n>>x;

ll arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

sort(arr,arr+n);

ll count=0;

ll i=0;
ll j=n-1;

while(i<=j){
    if(arr[i]+arr[j]<=x){
        i++;
        j--;
        count++;
    }
    else{
        j--;
        count++;
    }
}
    


cout<<count<<"\n";
return 0;
}