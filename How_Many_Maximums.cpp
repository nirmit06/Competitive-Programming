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

if(s[n-2]=='0'){
    s+='1';
}
else{
    s+='0';
}

bool ok=false;
int ans=0;

for(int i=0;i<s.length();i++){
    if(s[i]=='1' && ok==false){
        ans++;
        ok=true;
    }
    else if(s[i]=='0' && ok==true){
        ok=false;
    }
}

cout<<ans<<"\n";
};
return 0;
}