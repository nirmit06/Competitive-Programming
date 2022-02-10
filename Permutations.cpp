#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector <int> v;
int i=1,j=2;

while(j<=n){
    v.push_back(j);
    j+=2;
}

while(i<=n){
    v.push_back(i);
    i+=2;
}



if(n<=3 && n!=1){
    cout<<"NO SOLUTION";
}
else if(n==1){
    cout<<1;
}
else{
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

return 0;
}