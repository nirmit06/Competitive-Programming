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
    int count_even=0;
    int count_odd=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    int ans;
    if(count_odd&1){
        ans=count_even;
    }
    else{
        ans=min(count_even,count_odd/2);
    }
    cout<<ans<<"\n";

}
return 0;
}