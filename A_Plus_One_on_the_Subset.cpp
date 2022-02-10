#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
int size;
int element;
int answer;
while(t--){
    cin>>size;
    vector <int> v;

    for(int i=0;i<size;i++){
        cin>>element;
        v.push_back(element);
    }

    for(int j=0;j<size;j++){
        
        sort(v.begin(),v.end());
       answer=v[size-1]-v[0];
    }
    cout<<answer<<endl;
    v.clear();
}

return 0;
}