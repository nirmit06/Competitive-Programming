#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    double answer=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        answer+=arr[i];
    }

    sort(arr,arr+n);

    answer-=arr[n-1];

    answer/=(n-1);

    answer+=arr[n-1];


    cout<<fixed<<setprecision(6)<<answer<<"\n";

}
return 0;
}