#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
ll n,k;
cin>>n>>k;

ll mouse[k];
for(int i=0;i<k;i++){
    cin>>mouse[i];
}
sort(mouse,mouse+k);
ll cat_time=0;
ll count=0;
for(int i=k-1;i>=0;i--){
    int j=mouse[i];
    if(j<=cat_time){
        break;
    }
    int d=n-mouse[i];
    cat_time+=d;
    count++;
}
cout<<count<<"\n";
}
return 0;
}


