#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
ll n,m;
cin>>n>>m;

ll count_of_2;
ll count_of_1;

if(n<m){
    cout<<-1<<"\n";
}
else{
    if(n%2==0){
        count_of_2=(n/2);
        count_of_1=0;
    }
    else{
        count_of_2=(n/2);
        count_of_1=1;
    }
    
    ll total_count=(count_of_2+count_of_1);
    while(count_of_2>=0){
        if(total_count%m!=0){
        total_count++;
        count_of_2--;
        }
        else{
            break;
        }
    }



    cout<<total_count;


}
return 0;
}