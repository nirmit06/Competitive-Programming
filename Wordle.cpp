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
string s1;
cin>>s1;
string s2;
cin>>s2;
string m="";
for(int i=0;i<5;i++){
    if(s1[i]==s2[i]){
        m+='G';
    }
    else{
        m+='B';
    }
}
cout<<m<<"\n";
}
return 0;
}