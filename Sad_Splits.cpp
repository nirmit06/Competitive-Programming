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
ll n;
cin>>n;

int last=(n%10)%2;
n/=10;
bool flag=false;
while(n>0){
    if((n%10)%2==last){
        cout<<"YES"<<"\n";
        flag=true;
        break;
    }
    else{
        n/=10;
    }
}
if(flag==false)
cout<<"NO"<<"\n";

}
return 0;
}