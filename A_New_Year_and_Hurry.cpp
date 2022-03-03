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
ll n,k;
cin>>n>>k;

int remaining=240-k;
int count=0;
int i=1;
while(remaining>0 && n>0){
    if(5*i<=remaining){
    remaining-=5*i;
    count++;
    i++;
    n--;
    }
    else{break;}
}
cout<<count;
return 0;
}