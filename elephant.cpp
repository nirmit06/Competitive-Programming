#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n;
cin>>n;

long long int count;
if(n>5){
    if(n%5==0){
        count=n/5;
    }
    else{
    count=(n/5)+1;
    }
    cout<<count<<endl;


}
else{
    count=1;
    cout<<count<<endl;
}
return 0;
}