#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
long long int n,m;
cin>>n>>m;
long long int task;
long long int count=0;
int initial =1;
for(int i=0;i<m;i++){
    cin>>task;
    if(task>=initial){
        count+=task-initial;
    }
    else{
        count+=n-(initial-task);
    }
    initial=task;
}
cout<<count;


return 0;
}