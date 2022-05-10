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
ll x,y;
cin>>x>>y;

if((x&1==1 && y&1==1) ||(x<=1) || (y<=1)){
cout<<-1<<"\n";
}
else{
    string s1,s2;
    if(x&1){
        s1="";
        for(int i=0;i<(y/2);i++){
            s1+='b';
        }
        for(int i=0;i<x;i++){
            s1+='a';
        }
        for(int i=0;i<(y/2);i++){
            s1+='b';
        }
        s2="";
        for(int i=0;i<(x)/2;i++){
            s2+='a';
        }
        for(int i=0;i<(y/2);i++){
            s2+='b';
        }
        s2+='a';
        for(int i=0;i<(y/2);i++){
            s2+='b';
        }
        for(int i=0;i<(x)/2;i++){
            s2+='a';
        }
    }
    else if(y&1){
        s1="";
        for(int i=0;i<(x/2);i++){
            s1+='a';
        }
        for(int i=0;i<y;i++){
            s1+='b';
        }
        for(int i=0;i<(x/2);i++){
            s1+='a';
        }
        s2="";
        for(int i=0;i<(y)/2;i++){
            s2+='b';
        }
        for(int i=0;i<(x/2);i++){
            s2+='a';
        }
        s2+='b';
        for(int i=0;i<(x/2);i++){
            s2+='a';
        }
        for(int i=0;i<(y)/2;i++){
            s2+='b';
        }
    }
    else{
        s1="";
        for(int i=0;i<(x/2);i++){
            s1+='a';
        }
        for(int i=0;i<y;i++){
            s1+='b';
        }
        for(int i=0;i<(x/2);i++){
            s1+='a';
        }

        s2="";
        for(int i=0;i<(y/2);i++){
            s2+='b';
        }
        for(int i=0;i<x;i++){
            s2+='a';
        }
        for(int i=0;i<(y/2);i++){
            s2+='b';
        }

    }
    cout<<s1<<"\n";
    cout<<s2<<"\n";
}
}
return 0;
}