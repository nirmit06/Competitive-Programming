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

    ll n,width;
    cin>>n>>width;
    ll arr[n];
        
        
    for(int i=0;i<=n;i++){
        cin>>arr[i];  
    }
    
    int sum=0;
    int windowsum=0;
    int index=width-1;

    for(int i=0;i<width;i++){
        sum=arr[i]+sum;
    }
    windowsum=sum;

    for(int i=width;i<n;i++){
        windowsum=windowsum+arr[i]-arr[i-width];
        if(windowsum<sum){
            windowsum=sum;
            index=i;
        }
    }
    cout<<index-width+2;

        



       

        
       
        

return 0;
}