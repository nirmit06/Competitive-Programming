#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int zero=0,one=0;
    int minimum;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            zero++;
        }
        else{
            one++;
        }
    }
    
    
    minimum=min(one,zero);
    if((minimum)%2==0){
        cout<<"NET"<<"\n";
    }
    else{
        cout<<"DA"<<"\n";
    }

}

return 0;
}