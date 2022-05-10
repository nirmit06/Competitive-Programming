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
int l;
cin>>l;
string s;
cin>>s;
int n=s.length();
if(find(s.begin(),s.end(),'R')==s.end() && find(s.begin(),s.end(),'B')==s.end()){
    cout<<"YES"<<"\n";
}
else if(n==1){
    cout<<"NO"<<"\n";
}
else if(n==2){
    if(s=="RB" || s=="BR"){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}
else {
    if(((s[0]=='R' || s[0]=='B') && s[1]=='W') || ((s[n-1]=='R' || s[n-1]=='B') && s[1]=='W')){
        cout<<"NO"<<"\n";
    }
    else{
        bool ok_w=false;
        bool ok_three=false;
        for(int i=1;i<n-1;i++){
            if(s[i-1]=='W' && s[i+1]=='W'){
                ok_w=true;
                break;
            }
            else if(s[i-1]==s[i] && s[i]==s[i+1]){
                ok_three=true;
                break;
            }
        }
        if(ok_three || ok_w){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }

}



}
return 0;
}