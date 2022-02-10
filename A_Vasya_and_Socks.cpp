#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int n,m;
cin>>n>>m;

int count=0;

for(int i=1;i<1e8;i++){
    --n;
    if(i%m==0){
        ++n;
    }
     count++;
    if(n==0){
        break;
    }
   
}

cout<<count;
return 0;
}