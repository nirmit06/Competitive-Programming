#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
int n;
while(t--){ 
    int sum=0;

    cin>>n;
    
    while(n!=0){ 
    int rem=n%10;
    sum=sum*10+rem;
    n=n/10;
    }
    cout<<sum<<endl;
    
}
return 0;
}