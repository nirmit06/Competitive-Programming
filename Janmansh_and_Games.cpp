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
int x,y;
cin>>x>>y;
if((y%2==0 && x%2==0) || (y%2!=0 && x%2!=0)){
    cout<<"Janmansh"<<"\n";
}
else{
    cout<<"Jay"<<"\n";
}
}
return 0;
}