#include<bits/stdc++.h>

using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
long long row,column;
cin>>row>>column;

if(row<column){
    long long answer;
    if(column%2!=0){
        answer=(column*column)-row+1;
    }
    else{
        answer=((column-1)*(column-1))+row;
    }
    cout<<answer<<endl;
}
else{
    long long answer;
    if(row%2!=0){
        answer=((row-1)*(row-1))+column;
    }
    else{
        answer=(row*row)-column+1;
    }
    cout<<answer<<endl;
}
}
return 0;
}