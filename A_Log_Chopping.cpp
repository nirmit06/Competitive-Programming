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

    vector <int> v(n);
    ll count=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        count+=(v[i]-1);
    }

    if(count%2==0){
        cout<<"maomao90"<<"\n";
    }
    else{
        cout<<"errorgorn"<<"\n";
    }
}
return 0;
}