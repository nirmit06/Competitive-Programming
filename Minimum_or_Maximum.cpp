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

    vector <int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int mn=INT_MAX,mx=INT_MIN;
    bool ok=true;
    for(int i=0;i<n;i++){
        mn=min(mn,v[i]);
        mx=max(mx,v[i]);
        if(v[i]!=mn && v[i]!=mx){
            ok=false;
            cout<<"NO"<<"\n";
            break;
        }
    }
    if(ok)
    cout<<"YES"<<"\n";
}
return 0;
}