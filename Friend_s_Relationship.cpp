#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
int n;
while(t--){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
           
                if(j<=i || j>2*n-i){
                    cout<<"*";
                }
                else{
                cout<<"#";
                }
            
           
        }
         cout<<"\n";
    }
    cout<<endl;
}
return 0;
}