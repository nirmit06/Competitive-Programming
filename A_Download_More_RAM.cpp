#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int temp=k;
   pair <int, int> arr[n];
   int element1;
    for(int i=0;i<n;i++){
        cin>>element1;
        arr[i].first=element1;
    }
    int element2;
    for(int j=0;j<n;j++){
        cin>>element2;
        arr[j].second=element2;
    }

    sort(arr,arr+n);

    int count=0;
    for(int i=0;i<n;i++){
        if(count==n){
            break;
        }
        if(arr[i].first<=k){
            k+=arr[i].second;
            count++;
        }
    }
    cout<<k<<"\n";
}
return 0;
}