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
double x1,x2,y1,y2;
cin>>x1>>x2>>y1>>y2;

if(double(y1/x1)==double(y2/x2)){
    cout<<0<<"\n";
}
else if(double(y1/x1)>double(y2/x2)){
    cout<<1<<"\n";
}
else if(double(y1/x1)<double(y2/x2)){
    cout<<-1<<"\n";
}
}
return 0;
}