#include<bits/stdc++.h>
using namespace std;


int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
int n;
int fact=1;
while(t--){
    cin>>n;
    for(int i=0;i<n;i++){
        if(n>0){
        fact=fact*n;
        n--;
        }
        cout<<fact;
    }

}
return 0;
}