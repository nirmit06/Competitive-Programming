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
int count_1=0;
int count_0=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='0')
    count_0++;
    else
    count_1++;
}

if(abs(count_0-count_1)%2!=0){
    cout<<"NO"<<"\n";
}
else{
    cout<<"YES"<<"\n";
    int g;
    count_1>count_0?g=count_1:g=count_0;
    int dif;
    dif=abs(count_0-count_1);

    if(dif==2 && g==count_0){
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            cout<<i+1<<" "<<i+1<<"\n";
            break;
        }
    }
    }
    else if(dif==2 && g==count_1){
        for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            cout<<i+1<<" "<<i+1<<"\n";
            break;
        }
    }
    }
    else if(count_1==count_0){
        for(int i=0;i<s.length();i++){
            if((s[i]=='1' && s[i+1]=='0') || (s[i]=='0' && s[i+1]=='1')){
                cout<<i+1<<" "<<i+2<<"\n";
                break;
            }
        }
    }
    else if(g==count_0){
        

    }
}
}
return 0;
}