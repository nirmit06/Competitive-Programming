#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
cin>>n;
int arr[n];
int count=1;
int element;
for(int i=0;i<n;i++){
    cin>>element;
    arr[i]=element;
}
int count_1=0;
for(int i=0;i<n;i++){
    if(arr[i]<=arr[i+1] && (i+1)!=n){
        count++;
    }
    else{
        int temp=max(count,count_1);
        count_1=temp;
        count=1;
    }
}

cout<<count_1;

return 0;
}