#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;

    double answer=pow(0.143*n,n);

    if(abs(ceil(answer)-answer)<0.5){
        cout<<ceil(answer)<<"\n";
    }
    else{
        cout<<floor(answer)<<"\n";
    }
    
}
return 0;
}