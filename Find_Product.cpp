#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
cin>>n;

int arr[n];

for(int i=1;i<=n;i++){
    arr[i-1]=i;
}

int product=1;

for(int i=0;i<n;i++){
    product*=arr[i];
}

cout<<product;

return 0;
}