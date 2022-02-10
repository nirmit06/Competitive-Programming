#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
ll t;
cin>>t;
ll a1=1;
ll a2=2;
while(t--){
    ll element;
    cin>>element;
    
    ll a3;
    int initial_answer=(element*3);
    a3=initial_answer-3;
    cout<<a1<<" "<<a2<<" "<<a3<<"\n";
}
return 0;
}