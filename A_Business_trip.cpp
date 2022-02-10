#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
ll k;
cin>>k;
ll arr[12];

for(int i=0;i<12;i++){
    cin>>arr[i];
}

sort(arr,arr+12);

ll count=0;
ll sum=0;
for(int i=11;i>=0;i--){
    if(sum<k){
        sum+=arr[i];
        count++;
    }
    else{
        break;
    }
}

if(sum<k){
cout<<-1<<"\n";
}
else{
    cout<<count<<"\n";
}



return 0;
}