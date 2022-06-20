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

vector <int> g_t(n);
vector <int> c_t(n);

for(int i=0;i<n;i++){
    cin>>g_t[i];
}

for(int i=0;i<n;i++){
    cin>>c_t[i];
}
for(int i=0;i<n-1;i++){
    if(c_t[i]<=g_t[i+1]){
        cout<<c_t[i]-g_t[i]<<" ";
    }
    else{
        cout<<c_t[i]-g_t[i]<<" ";
        g_t[i+1]=c_t[i];
    }
}

cout<<c_t[n-1]-g_t[n-1]<<" ";
cout<<"\n";
}
return 0;
}