#include <iostream>
 
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    int minimum=min(n,m);
     if((minimum)%2==0){
        cout<<"Malvika";
    }
    else{
        cout<<"Akshat";
    }
    return 0;
}