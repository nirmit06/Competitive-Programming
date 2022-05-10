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

    vector <int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int rep=0;
    int moves=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1])
            rep++;
        else{
            if(rep==1){
                moves+=1;
                rep=0;
            }
            else{
                moves+=(rep/2);
                rep=0;
            }
        }
        if(i==n-2 && rep!=0){
            moves+=(rep/2);
        }
    }

    cout<<moves<<"\n";
}
return 0;
}