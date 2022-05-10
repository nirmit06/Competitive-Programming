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
int n,r,b;
cin>>n>>r>>b;
string s;
int mini=r/(b+1);
int countb=r%(b+1);
for(int i=0;i<b+1-countb;i++){
    string ss(mini,'R');
    s+=ss;
    s+='B';
}

for(int i=0;i<countb;i++){
    string ss(mini+1,'R');
    s+=ss;
    s+='B';
}
s.pop_back();
cout<<s<<"\n";

}
return 0;
}