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
int x,y,a,b;
cin>>x>>y>>a>>b;
set <int> s;
s.insert(x);
s.insert(y);
s.insert(a);
s.insert(b);

if(s.size()==4){
    cout<<2<<"\n";
}
else if(s.size()==3){
    cout<<1<<"\n";
}
else if(s.size()==2){
    cout<<0<<"\n";
}
}
return 0;
}