#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
double m;
cin>>n>>m;
int arr[n];

for(int i=0;i<n;i++){
cin>>arr[i];
if(arr[i]<=0){
    arr[i]=0;
}
}

double maxa=0,ans=0;

for(int i=0;i<n;i++){
    if(ceil(arr[i]/m)>=maxa){
        maxa=arr[i]/m;
        ans=i;
    }
}
cout<<ans+1;


return 0;
}