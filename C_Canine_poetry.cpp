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

if(s.length()==1){
    cout<<0<<"\n";
}
else if(s.length()==2){
    if(s[0]==s[1]){
        cout<<1<<"\n";
    }
    else{
        cout<<0<<"\n";
    }
}
else{
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1] || (i-2>=0 && (s[i]==s[i-2]))){
            s[i]='*';
        }
    }   

int count=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='*'){
        count++;
    }
}
cout<<count<<"\n";
}
}
return 0;
}