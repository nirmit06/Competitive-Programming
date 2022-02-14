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
    ll ang;
    cin>>ang;
    ll i=3;
    bool flag =false;
    while((i-2)*180<=(i*ang)){
        if((i-2)*180>(i*ang)){
            break;
        }
        else if((i-2)*180==(i*ang)){
            flag=true;
            break;
        }
          i++;
    }
    if(flag){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    
}
return 0;
}