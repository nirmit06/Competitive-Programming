#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
ll t;
cin>>t;

while(t--){
    ll x,n,m;
    cin>>x>>n>>m;
    bool flag=false;

    while((x>20 && n>0)){

        x=(x/2)+10;
        n--;
    }

    while(x>0 && m>0){
        x-=10;
        m--;
        if(x<=0){
            flag=true;
            break;
        }
    }

    
    

    if(flag){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}
return 0;
}