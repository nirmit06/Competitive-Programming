#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int no_Of_Coins;
cin>>no_Of_Coins;

int coin_value[no_Of_Coins];
int sum=0;
int count=no_Of_Coins;
for(int i=0;i<no_Of_Coins;i++){
    cin>>coin_value[i];  
    sum+=coin_value[i];
}

sort(coin_value,coin_value+no_Of_Coins);
int sum1=0;
int count1=0;
for(int i=no_Of_Coins-1;i>=0;i--){
    sum1+=coin_value[i];
    sum-=coin_value[i];
    
    count1++;
    count--;

    if(sum<sum1){
        break;
    }
}
cout<<count1;
return 0;
}