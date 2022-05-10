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
bool var=true;
for(int i=0;i<n;i++){
    for(int j=n-1;j>i;j--){
        if(s[i]==s[j] && j-i!=0 && s[j]!=s[j-1]){
            var=false;
            break;
        }
    }
}
if(var==true){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}
}
return 0;
}