#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<string>> vec;
    string color;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>color;
            vec[i][j].push_back(color);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<vec[i][j];
        }
    }

    
    //  string y="Y";
    // vector<vector<string>>::iterator it;
    // it=find(vec.begin(),vec.end(),"Y");
    
    // if(it !=vec.end()){
    //     cout<<"#Color"<<endl;
    // }
    // else{
    //     cout<<"#Black&White"<<endl;
    // }
return 0;
}