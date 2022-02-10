#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
cin>>n;
int a,b,c;
int x[n];
int y[n];
int z[n];
int sum1=0,sum2=0,sum3=0;



    for(int i=0;i<n;i++){
        cin>>a;
        x[i]=a;
        cin>>b;
        y[i]=b;
        cin>>c;
        z[i]=c;
    }

        for(int i=0;i<n;i++){
            sum1+=x[i];
            sum2+=y[i];
            sum3+=z[i];
        }

        if(sum1==0 && sum2==0 && sum3==0){
            cout<<"YES";
        }
        else cout<<"NO";
    




return 0;
}