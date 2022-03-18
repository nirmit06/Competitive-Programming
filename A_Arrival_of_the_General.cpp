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
int n;
cin>>n;

vector <int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}

vector <int> v=arr;

sort(v.begin(),v.end());

ll low=v[0];
ll high=v[n-1];
ll small;
ll tall;
ll temp_s,temp_t;
int high_count=0;
if(arr[0]==high && arr[n-1]==low){
    cout<<0<<"\n";
}
else{
for(int i=0;i<n;i++){
    if(arr[i]==low){
        small=n-(i+1);
        temp_s=i+1;
    }
    else if(arr[i]==high && high_count<1){
        tall=i;
        temp_t=i+1;
        high_count++;
    }
}
// cout<<small<<" "<<tall<<"\n";
// cout<<temp_s<<" "<<temp_t<<"\n";

if(temp_s<temp_t){
    cout<<(small+tall)-1;
}
else{
    cout<<(small+tall);
}
}
return 0;
}