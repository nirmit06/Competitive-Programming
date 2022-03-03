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
int n,t;
cin>>n>>t;
string s;
cin>>s;

while(t>0){
    for(int i=0;i<n-1;i++){
        if(s[i]=='B' && s[i+1]=='G'){
            s[i]='G';
            s[i+1]='B';
            ++i;
        }
    }
    t--;
}

cout<<s;
return 0;
}