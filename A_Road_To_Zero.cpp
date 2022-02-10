#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
ll x,y;
cin>>x>>y;
ll a,b;
cin>>a>>b;

ll num1=abs(x);
ll num2=abs(y);
ll maximum=max(num1,num2);
ll minimum=min(num1,num2);

ll difference=(maximum-minimum);

ll sum=(difference*a)+(minimum*b);

if((num1+num2)*a<sum){
    sum=(num1+num2)*a;
}

cout<<sum<<endl;

}

return 0;
}