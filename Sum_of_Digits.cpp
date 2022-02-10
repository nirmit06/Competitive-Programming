#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
int sum=0;
int element;
int mod;
while(t--){
    cin>>element;
    while(element>0){
    mod=element%10;
    sum+=mod;
    element=element/10;
}
cout<<sum<<endl;
sum=0;

}
return 0;
}