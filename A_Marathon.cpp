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
int arr[4];

for(int i=0;i<4;i++){
    cin>>arr[i];
}
int temp=arr[0];
int count=0;
for(int i=1;i<4;i++){
    if(arr[i]>temp){
        count++;
    }
}
cout<<count<<"\n";
}
return 0;
}