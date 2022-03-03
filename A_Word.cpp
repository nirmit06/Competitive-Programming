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

int low=0;
int high=0;

for(int i=0;i<s.size();i++){
    if(s[i]!=tolower(s[i])){
        low++;
    }
    else{
        high++;
    }
}
int answer=min(low,high);
if(low==high || low<high){
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
}
else{
    for(int i=0;i<s.size();i++){
        s[i]=toupper(s[i]);
    }
}
cout<<s;
return 0;
}