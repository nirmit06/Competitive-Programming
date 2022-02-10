#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
cin>>n;
int arr[n];
int element;

for(int i=0;i<n;i++){
    cin>>element;
    arr[i]=element;
}

sort(arr,arr+n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}