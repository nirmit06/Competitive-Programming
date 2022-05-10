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
ll n,w;
cin>>n>>w;
vector <ll> ind;
int var=0;
ll sum=0;
ll element;
for(int i=1;i<=n;i++){
    cin>>element;
    if(element<=w)
        if(element>=(w+1)/2)
        var=i;
        else if(sum<(w+1)/2) ind.push_back(i),sum+=element;
    
}

if(var)
    cout<<1<<"\n"<<var;
else if(sum>=(w+1)/2){
    cout<<ind.size()<<"\n";
    for(auto x:ind){
        cout<<x<<' ';
    }
}
else{
    cout<<-1;
}
cout<<"\n";

}
return 0;
}