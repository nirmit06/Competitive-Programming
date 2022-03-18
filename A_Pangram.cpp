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
int n;
cin>>n;
string s;
cin>>s;

set<char> set;

for(int i=0;i<n;i++){
    s[i]=tolower(s[i]);
    set.insert(s[i]);
}

if(set.size()==26){
    cout<<"YES";
}
else{
    cout<<"NO"<<"\n";
}
return 0;
}