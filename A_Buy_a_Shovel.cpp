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
int k,r;
cin>>k>>r;
int sum=k;
ll count=1;

for(int i=1;i<1e9;i++){
    
    int required=(sum)%10-r;

    if(required==0 || sum%10==0){
        break;
    }
    count++;
    sum+=k;
}
cout<<count;
return 0;
}