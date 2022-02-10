#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> v1;
   vector <int> v2;
    map<int,int> m;

    int t;
    cin>>t;
    int n;
    int a[n];
cin>>n; 
    for(int i=0;i<n;i++){
        cin>>v1[i];
        if(m[a[i]]==1){
            v2.push_back(a[i]);
        }
        else{
            v1.push_back(a[i]);
            m[a[i]]++;
        }
    }
            
            
        

    
    return 0;
}