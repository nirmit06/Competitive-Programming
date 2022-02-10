#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int limit=1e5+10;
vector<int> ans(limit);
void preprocess(){
    ans[1]=1;
    for(int i=2;i<limit;i++){
        int X=i^(i-1);
        ans[i]=X;
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
preprocess();
int t;
cin>>t;
while(t--){
    int N; cin>>N;
    for(int i=1;i<=N;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
return 0;
}