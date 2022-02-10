#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
string j;
string s;
while(t--){
    
    cin>>j>>s;
    int count=0;
    for(int i=0;i<s.length();i++){
        for(int k=0;k<j.length();k++){
            if(s[i]==j[k] ){
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
}
return 0;
}