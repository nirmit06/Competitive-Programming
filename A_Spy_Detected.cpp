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

    map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    int check;
    for(auto x:mp){
        if(x.second==1){
            check=x.first;
            break;
        }
    }

    for(int i=0;i<n;i++){
        if(v[i]==check){
            cout<<i+1<<"\n";
            break;
        }
    }





}
return 0;
}