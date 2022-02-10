#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;

while(t--){
    int l,r,k;
    cin>>l>>r>>k;
    int odd;
    if(l==r && l==1){
        cout<<"NO"<<"\n";
        
    }
    else if(l==r){
        cout<<"YES"<<"\n";
        
    }
    else {
        if(((r-l)+1)%2==0){
        odd=((r-l)+1)/2;
        }
    else if(l%2==0){
        odd=(((r-l)+1)/2);
    }
    else{
        odd=((r-l)/2)+1;
    }
    if(odd<=k){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    }
}

return 0;
}