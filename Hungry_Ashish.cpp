#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;

    if(x<y && x<z){
        cout<<"NOTHING"<<"\n";
    }
    else if(y<=x){
        cout<<"PIZZA"<<"\n";
    }
    else {
        cout<<"BURGER"<<"\n";
    }
}
return 0;
}