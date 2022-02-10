#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
       
       int s1,s2,s3,s4;
        for(int i=0;i<n;i++)
        {
            cin>>s1>>s2>>s3>>s4;
            int max1=max(s1,s2);
            int min1=min(s1,s2);
            int max2=max(s3,s4);
            int min2=min(s3,s4);
            int second=min(max1,max2);
            if(second>min1 && second > min2){
                cout<<"YES"<<endl;
            }
            else{
            cout<<"NO"<<endl;
            }
        }   
return 0;
}