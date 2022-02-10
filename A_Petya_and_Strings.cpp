#include<bits/stdc++.h>
using namespace std;


int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);

string a;
string b;
cin>>a>>b;
bool same=true;
for(int i=0;i<a.length();i++){
    
    if(tolower(a[i])!=tolower(b[i])){
        if(tolower(a[i])>tolower(b[i])){
            cout<<1;
            same=false;
            break;
        }
        else{
            cout<<-1;
            same=false;
            break;
        }
    } 
}
if(same==true){
    cout<<0;
}
return 0;
}