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

    int sum=0;
    int temp_sum=0;
    for(int i=0;i<n;i++){
        temp_sum+=arr[i];
    }
    sort(arr,arr+n);
    if(n==2){
        cout<<arr[0]+arr[1]<<"\n";
    }{
    if(n%2==0){
        int lim=(n/2)+1;
        for(int i=0;i<lim;i++){
            sum+=arr[i];
        }
        int rem=temp_sum-sum;
        float avg=(float)sum/(float)((n/2)+1)+((float)rem/(float)(n-(n/2)-1));
        cout<<avg<<"\n";
    }
    else{
        int lim=(n+1)/2;
        for(int i=0;i<lim;i++){
            sum+=arr[i];
        }
        int rem=temp_sum-sum;
        float avg=(float)sum/(float)((n+1)/2)+((float)rem/(float)(n-((n+1)/2)));
        cout<<avg<<"\n";
    }
    }
}
return 0;
}