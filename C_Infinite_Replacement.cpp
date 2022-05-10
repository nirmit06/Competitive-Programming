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
string s,t;
cin>>s>>t;

if(t.find('a')!=string::npos && t.length()!=1 && s.find('a')!=string::npos){
    cout<<-1<<"\n";
}
else if((count(t.begin(),t.end(),'a')==1 && t.length()==1 )|| s.find('a')==string::npos){
    cout<<1<<"\n";
}
else if(count(s.begin(),s.end(),'a')==1){
    cout<<2<<"\n";
}
else{
    int a=count(s.begin(),s.end(),'a');
    int temp=1;
    for(int i=1;i<=a;i++){    
      temp=temp*i;    
  }    
    cout<<2+temp<<"\n";
}
}
return 0;
}