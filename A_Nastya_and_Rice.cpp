#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--)
{
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;

    int min_weight_per_grain=(a-b);
    int max_weight_per_grain=(a+b);

    int min_TotalWeight=(c-d);
    int max_TotalWeight=(c+d);

    int min_assumedweight=n*min_weight_per_grain;
    int max_assumedweight=n*max_weight_per_grain;

    if(max_assumedweight<min_TotalWeight || min_assumedweight>max_TotalWeight){
        cout<<"No"<<"\n";
    }
    else{
        cout<<"Yes"<<"\n";
    }
}
return 0;
}