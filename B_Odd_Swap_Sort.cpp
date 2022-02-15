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
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector <int> v1,v2,even,odd;

    for(int i=0;i<n;i++){
        if(a[i]%2){
            v1.push_back(a[i]);
            odd.push_back(a[i]);
        }
        else{
            v2.push_back(a[i]);
            even.push_back(a[i]);
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    if(v1==odd && v2==even){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
    }
}
return 0;
}