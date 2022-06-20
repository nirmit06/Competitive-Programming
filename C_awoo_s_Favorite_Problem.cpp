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

bool solve(string x,string y,int n){
    string s="";
    string t="";

for(int i=0;i<n;i++){
    if(x[i]!='b')
    s.push_back(x[i]);
    if(y[i]!='b')
    t.push_back(y[i]);
}

if(s!=t){
   return false;
}
// cout<<s<<" "<<t<<"\n";
vector <ll> s_aind,t_aind;

for(int i=0;i<n;i++){
    if(x[i]=='a')
    s_aind.push_back(i);
    if(y[i]=='a')
    t_aind.push_back(i);
}

for(int i=0;i<s_aind.size();i++){
    if(s_aind[i]>t_aind[i]){
        return false;
    }
}

vector <ll> s_cind,t_cind;

for(int i=0;i<n;i++){
    if(x[i]=='c'){
    s_cind.push_back(i);
    }
    if(y[i]=='c'){
    t_cind.push_back(i);
    }
}

for(int i=0;i<s_cind.size();i++){
    if(s_cind[i]<t_cind[i]){
        return false;
    }
}

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

string s1;
cin>>s1;

string s2;
cin>>s2;

if(solve(s1,s2,n)==true){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}


}
return 0;
}