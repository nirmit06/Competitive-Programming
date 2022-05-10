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
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    ll len1=s1.length();
    ll len2=s2.length();
    // bool check=true;
    vector <int> v;

    // for(int i=0;i<s1.length();i++){
    //     if(s2[s2.length()-1]==s1[i]){
    //         v[0]=i;
    //     }
    // }
    int l=len1-1,r=len2-1;
    set <int> s;
    while(v.size()<s2.length()){
        if(s2[r]==s1[l] && s.find(l)==s.end()){
            v.push_back(l);
            s.insert(l);
            l--;
            r--;
            l=len1-1;
        }
        else{
            l--;
        }  
    }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<"\n";
    // }
    bool ok=true;
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>=v[i+1]){
            ok=false;
            break;
        }
    }

    if(ok){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}
return 0;
}