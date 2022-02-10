#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
cin>>n;

vector <int> v;

int element;
for(int i=0;i<n;i++){
    cin>>element;
    v.push_back(element);
}


long long int count=0;
for(int i=0;i<n-1;i++){
    if(v[i]>v[i+1]){
        count=count +(v[i]-v[i+1]);
        v[i+1]=v[i];
    }
}

cout<<count;


return 0;
}