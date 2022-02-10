#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
vector <int> v;
while(t--){
    int N,X;
    cin>>N>>X;
    int element;
    int total =0;
    for(int i=0;i<N;i++){
        cin>>element;
        total+=element;
        v.push_back(element);
    }
    sort(v.begin(),v.end(),greater<int>());

    if(total<X){
        cout<<-1<<endl;
    }
    else{
        int newtotal=0;
        for(int i=0;i<N;i++){
           newtotal+=v[i];
           if(newtotal>=X){
               cout<<i+1<<endl;
               break;
           }
    }
    }
    v.clear();

    
}
return 0;
}