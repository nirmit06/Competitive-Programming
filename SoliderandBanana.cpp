#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,w;
    long long int n;
    cin>>k>>w>>n;
    int sum=0;
    int amount;
    for(int i=1;i<=n;i++){
        amount=k*i;
        sum+=amount;
    }

    if(sum<=w){
        cout<<0<<endl;;
    }
    else{
cout<<(sum-w)<<endl;
    }
    

return 0;
}