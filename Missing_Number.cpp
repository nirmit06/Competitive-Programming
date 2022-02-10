#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
cin>>n;
int element;
int answer;
vector <int> v;
for(int i=0;i<n-1;i++){
cin>>element;
v.push_back(element);
}

sort(v.begin(),v.end());

for(int i=1;i<=n;i++){
    if(v[i-1]!=i){
        answer=i;
        break;
    }
}

cout<<answer;
return 0;
}