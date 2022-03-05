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
int k,l,m,n,d;
cin>>k>>l>>m>>n>>d;


ll count=0;

for(int i=1;i<=d;i++){
    if(i%k==0){
        count++;
    }
    else if(i%l==0){
        count++;
    }
    else if(i%m==0){
        count++;
    }
    else if(i%n==0){
        count++;
    }
}

cout<<count;



return 0;
}