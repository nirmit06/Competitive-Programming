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
set<int>st;
for (int i = 0; i < 10; i++)
{
   st.insert(s[i]);
}
char f='0';

while(f<10+'0'){
    if(find(st.begin(),st.end(),f)!=st.end())
    f+=1;
    else{
    cout<<f;
    break;
    }
    
}

return 0;
}