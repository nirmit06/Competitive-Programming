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
    ll arr[2*n];
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    ll count=0;
    for (ll i = 0; i < 2*n; i++) {
        if(arr[i]==0){
            // cout<<count<<"\n";
            count++;
        }
    }
    if(count==n || count==0){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }

}
return 0;
}