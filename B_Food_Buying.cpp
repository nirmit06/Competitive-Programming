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
    ll n;
    cin>>n;
    if(n<10){
        cout<<n<<"\n";
    }
    else{
        ll temp1=n;
        ll temp,sum,last_digit;
        sum=0;
        while(temp1>9)
        {
        last_digit=temp1%10;
        temp=temp1-last_digit;
        sum+=temp;
        temp1=(temp1/10)+last_digit;
        }




        cout<<sum+temp1<<"\n";

        
    }
}
return 0;
}