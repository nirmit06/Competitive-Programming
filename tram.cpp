#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b;
 int arr[n];
int sum=0;

for(int i=0;i<n;i++){
    cin>>a>>b;
    sum+=(b-a);
    arr[i]=sum; 
}

int temp=INT_MIN;
for(int i=0;i<n;i++){
if(arr[i]>temp){
    temp=arr[i];
}

}




cout<<temp<<endl;
return 0;
}