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
    bool flag=true;
    if(s.length()%2!=0){
        cout<<"NO"<<"\n";
    }
    else{
        string s1;
        string s2;

        for(int i=0;i<s.length()/2;i++){
            s1+=s[i];
        }
        for(int i=s.length()/2;i<s.length();i++){
            s2+=s[i];
        }

        if(s1==s2){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}
return 0;
}