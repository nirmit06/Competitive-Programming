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
string s1;
cin>>s1;
string s2;
cin>>s2;
string temp=s1;
reverse(temp.begin(),temp.end());
if(temp==s2){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}
return 0;
}