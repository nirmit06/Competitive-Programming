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
int x;
cin>>x;
int n,b;
cin>>n>>b;
vector <int> v1(n);
vector <int> v2(b);
for(int i=0;i<n;i++){
    cin>>v1[i];
}

for(int i=0;i<b;i++){
    cin>>v2[i];
}

for(int i=0;i<n;i++){
    if(count(v2.begin(),v2.end(),abs(v1[i]-x))){
        cout<<v1[i]<<" "<<abs(v1[i]-x)<<"\n";
    }
}
return 0;
}