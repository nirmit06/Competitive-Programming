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
bool x=0;
if(n%2==0)
cout<<"YES"<<"\n";
else{
    for(int i=1;i<n;i++){
        if(v[i]<=v[i-1]){
            x=1;
            break;
        }
    }
    if(x)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
}
}
return 0;
}