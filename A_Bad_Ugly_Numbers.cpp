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
    if(n==1){
        cout<<-1<<"\n";
    }
    else{
        string sum="";
        sum+='2';
        for(ll i=0;i<n-1;i++){
            sum+='3';
        }
        
        cout<<sum<<"\n";
    }
}
return 0;
}