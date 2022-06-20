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
    int l,r;
    cin>>l>>r;

    if((l^(l+1)^(l+2)^(l+3))==0){
        cout<<l<<" "<<l+1<<" "<<l+2<<" "<<l+3<<"\n";
    }
    else if(l+4>r){
        cout<<-1<<"\n";
    }
    else{
        cout<<l+1<<" "<<l+2<<" "<<l+3<<" "<<l+4<<"\n";
    }
}
return 0;
}