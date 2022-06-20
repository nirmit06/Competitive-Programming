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

    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i_sum=v[0]+v[n-1];
    int sum=INT_MIN;
    for(int i=0;i<n-1;i++){
        int temp=v[i]+v[i+1];
        sum=max(temp,sum);
    }
    sum=max(sum,i_sum);
    cout<<sum<<"\n";
}
return 0;
}