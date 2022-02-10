#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
cin>>n;

    map <string,int> m;
    string team;
for(int i=0;i<n;i++){

    cin>>team;
    ++m[team];
}

int minimum=INT_MIN;
string answer;
for (auto x: m){
    if(x.second>minimum){
        minimum=x.second;
        answer=x.first;
    }
}
cout<<answer<<endl;


return 0;
}