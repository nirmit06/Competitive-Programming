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

ll sum=0;

for(int i=0;i<5;i++){
    ll num;
    cin>>num;
    sum+=num;
}

if(sum%5!=0 || sum==0){
    cout<<-1;
}
else{
    cout<<(sum/5);
}
return 0;
}