#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int n,t;
cin>>n>>t;
int arr[n];
for(int i=0;i<n-1;i++){
    int element;
    cin>>element;
    arr[i]=element;
}

for(int i=0;i<n-1;){
i+=arr[i];
if(i==(t-1)){
    cout<<"YES";
    return 0;
}
}
    cout<<"NO";


}