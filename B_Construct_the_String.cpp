#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
int n,a,b;
cin>>n>>a>>b;
string s="";



for(int i=0;i<n;i++){
    int j=97;
    for(int k=1;k<=b;k++){
        s+=j;
        if(s.length()==n){
            break;
        }
        j++;
    }
     if(s.length()==n){
            break;
        }
}
    

cout<<s<<"\n";
}

return 0;
}