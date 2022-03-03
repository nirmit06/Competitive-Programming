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
ll count=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='4' || s[i]=='7'){
        count++;
    }
}
if(count==4 || count==7){
    cout<<"YES";
}
else{
    cout<<"NO";
}
return 0;
}