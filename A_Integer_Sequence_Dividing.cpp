#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
 int n;
 cin>>n;
 int sum=0;

for(int i=1;i<=n;i++){
sum+=i;
}

if(sum%2==0){
    cout<<0;
}
else{
    cout<<1;
}
return 0;
}