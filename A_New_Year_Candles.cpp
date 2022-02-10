#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int a,b;
cin>>a>>b;
int hour=0;
int count=0;

for(int i=0;i<1e8;i++){
    if(a==0){break;}
    
    --a;
    
    hour++;
    count++;

    if(count==b){
    ++a;
    
    count=0;
    }
}

cout<<hour;
return 0;
}