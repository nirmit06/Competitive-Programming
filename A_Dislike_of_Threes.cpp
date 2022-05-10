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
int count=0;
int j=1;
for(int i=0;i<1e9;i++){
    if(count==n){
        break;
    }
    if(j%10==3 || j%3==0){
        j++;
    }
    else{
        count++;
        j++;
    }
}
cout<<j-1<<"\n";
}
return 0;
}