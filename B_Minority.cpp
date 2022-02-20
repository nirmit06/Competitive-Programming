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
    string s;
    cin>>s;
    ll count_0,count_1;
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[i+1]){
            count_0=i+1;
            count_1=s.length()-count_0;
            break;
        }
    }
    if(count_0==count_1 ){cout<<count_0-1<<"\n";}
    else{
    min(count_0,count_1)==count_1?cout<<count_1<<"\n":cout<<count_0<<"\n";
    }
}
return 0;
}