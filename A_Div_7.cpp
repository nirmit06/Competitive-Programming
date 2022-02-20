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

if(n%7==0){
    cout<<n<<"\n";
}
else{
    int sub=n%7;
    int add=7-sub;
    ll new_n=n-(n%10);
    if(n-sub>=new_n && new_n+10>n-sub){
        cout<<n-sub<<"\n";
    }
    else{
        cout<<n+add<<"\n";
    }
}
}
return 0;
}