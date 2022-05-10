#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int bal=0;
bool ok=true;
int a_count=0;
int b_count=0;
for(int i=0;i<s.length();i++){
if(b_count>a_count){
    ok=false;
    break;
}
if(s[i]=='A'){
    a_count++;
}
else{
    b_count++;
}
}
if(a_count<b_count || s.length()==1 || b_count==0 || s[s.length()-1]!='B'){
    ok=false;
}
if(ok){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}


}
return 0;
}