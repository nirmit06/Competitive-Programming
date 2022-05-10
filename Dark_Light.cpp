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

if(k==0){
    if(n%4==1 || n%4==2 || n%4==3){
        cout<<"On"<<"\n";
    }
    else{
        cout<<"Off"<<"\n";
    }
}
else{
    if(n%4==0){
        cout<<"On"<<"\n";
    }
    else{
    cout<<"Ambiguous"<<"\n";
    }
}
}
return 0;
}