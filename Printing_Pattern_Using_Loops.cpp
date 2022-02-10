#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
cin>>n;
int min1;
int min2;
int min;
int len=(2*n)-1;

for(int i=1;i<=len;i++){
    for(int j=1;j<=len;j++){
        
    min1= i<=len-i ? i -1 : len-i;
    min2= i<=len-j ? j -1 : len-j;
    min=min1<=min2?min1:min2;
        cout<<n-min<<" ";

    }
    cout<<endl;
}
return 0;
}