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
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    string temp=s;

    reverse(s.begin(),s.end());

    if(k==0 ||temp==s){
        cout<<1<<"\n";
    }
    else {
        cout<<2<<"\n";
    }


}
return 0;
}