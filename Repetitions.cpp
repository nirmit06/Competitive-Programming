#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
string s;
cin>>s;
int count=1;
vector<int>v;
for(int i=0;i<s.length();i++){
    if(s[i]==s[i+1] && s[i+1]!='\0'){
        count++;
    }
    else{
        v.push_back(count);
        count=1;
    }
}

cout<<*max_element(v.begin(),v.end());






return 0;
}