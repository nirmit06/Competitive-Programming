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
int count_0=0;
int count_1=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='0'){
        count_0++;
    }
    else{
        count_1++;
    }
}

if(count_0==count_1){
    cout<<n<<"\n";
}
else if(count_0>count_1){
    cout<<count_1+(count_1+1)<<"\n";
}
else if(count_0<count_1){
    cout<<count_0+(count_0+1)<<"\n";
}
}
return 0;
}