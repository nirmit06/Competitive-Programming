#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    
    
        int num,rem;
        rem=n%2020;

        num=((n-rem)/2020)-rem;
        if(num>=0){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    
}
return 0;
}