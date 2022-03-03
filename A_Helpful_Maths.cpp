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
string s;
cin>>s;
vector <char> v;

for(int i=0;i<s.length();i++){
    if(s[i]!='+'){
        v.push_back(s[i]);
    }
}

sort(v.begin(),v.end());

for(int i=0;i<=s.size()/2;i++){
    if(i==((s.size()/2))){
        cout<<v[i];
    }
    else{
        cout<<v[i]<<'+';
    }
}

return 0;
}