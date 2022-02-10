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
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    if(n>45){
        cout<<-1<<"\n";
    }
    else{
        string s="";
        for(int i=9;i>=1;i--){
            if(n<=9 && n<=i){
                s+=to_string(n);
                n=0;
                break;
            }
            else{
                s+=to_string(i);
                n-=i;

            }
        }

        if(n){
            cout<<-1<<"\n";
        }

        reverse(s.begin(),s.end());
        cout<<s<<"\n";

    }
}
return 0;
}