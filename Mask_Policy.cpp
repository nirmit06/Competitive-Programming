#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
while(t--){
int n,a;
cin>>n>>a;
int safe=n-a;
if(safe==a){
    cout<<a<<"\n";
}
else if(safe>a){
    cout<<a<<"\n";
}
else{
    cout<<safe<<"\n";
}


}
return 0;
}