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
ll count=0;
while(n!=0){
    if(n>=100){
    n-=100;
    count++;
    }
    else if(n>=20){
        n-=20;
        count++;
    }
    else if(n>=10){
        n-=10;
        count++;
    }
    else if(n>=5){
        n-=5;
        count++;
    }
    else {
        count+=n;
        n-=n;
        
    }
}
cout<<count;
return 0;
}