#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int n,m;
cin>>n>>m;

int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

sort(arr,arr+n);

int sum=0;
for(int i=0;i<m;i++){
    if(arr[i]<0){
        sum+=abs(arr[i]);
    }
    
}

cout<<sum;
return 0;
}