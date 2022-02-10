#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
long long int a,b,c;

while(t--){
    cin>>a>>b>>c;
    long long int first=min(a,b);
    long long int second=min(first,c);
    long long int temp=(b-a)+(c-b);
     long long int check =(unsigned)(temp/second);
    
    if(a==b && b==c){
        cout<<"YES"<<endl;
    }
    else if(min(a,b)!=min(b,c)){
        cout<<"NO"<<endl;
    }
    else if(check>=1 ){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    
}
return 0;
}