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
int n;
cin>>n;

string s;
cin>>s;
string ans="";
ans+=s[0];
if(s[0]==s[1] || s[1]>s[0]){
cout<<ans;
reverse(ans.begin(),ans.end());
cout<<ans<<"\n";
}
else{
for(int i=1;i<n;i++){
    if(s[i]<=s[i-1]){
        ans+=s[i];
    }
    else{break;}
}
cout<<ans;
reverse(ans.begin(),ans.end());
cout<<ans<<"\n";
}

}
return 0;
}