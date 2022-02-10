#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s="";
    int j=97;
    for(int i=0;i<n;i++){
        if(j==127){
            j-=30;
        }
        s+=char(j);
        j++;
    }

    cout<<s<<"\n";
}
return 0;
}