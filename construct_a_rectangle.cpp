#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    
    vector <long long int> v(3);
for(int i=0;i<3;i++){
        cin>>v[i];
}
        sort(v.begin(),v.end());
        if(v[2]==v[0]+v[1]){
            cout<<"YES"<<endl;
        }
        else if(v[0]==v[1] && v[2]%2==0){
            cout<<"YES"<<endl;
        }
        else if(v[1]==v[2]&& v[0]%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
int main()
{
    long long int t=1;
    cin>>t;
    while(t--){
    solve();
}
    
    
    
   
return 0;
}