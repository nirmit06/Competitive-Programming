#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
ll t;
cin>>t;
while(t--){
   
    ll n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int low=0;
    int high=n-1;

    int count=0;

    while(high>low){
        if(s[low]!=s[high])
        count++;
        low++;
        high--;
    }

if(n%2==0){
    if(count<=k){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}
else{
    if(count<=k && (k-count)%2==0){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}


    
} 
return 0;
}