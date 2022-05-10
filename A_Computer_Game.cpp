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

string s1,s2;
cin>>s1>>s2;
bool ok=true;
for(int i=0;i<n;i++){
    if(s1[i]=='1'&& s2[i]=='1'){
        ok=false;
        break;
    }
}

if(ok==true){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}
}
return 0;
}