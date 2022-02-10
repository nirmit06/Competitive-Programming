#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }

    sort(arr,arr+m);
    int leastvalue = arr[n-1]-arr[0];
    for(int i=1; i<= m-n ; ++i){ ///  5 6 7 8 9 
        
        if(arr[i+n-1]-arr[i] < leastvalue){
            leastvalue = arr[i+n-1]-arr[i];
        }
    }
    cout<<leastvalue<<"\n";
    return 0;
}
