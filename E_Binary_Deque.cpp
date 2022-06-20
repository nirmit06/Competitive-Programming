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

int n;
cin>>n;

int s;
cin>>s;
int sum=0;
vector<pair<int,int>> pos;
int ans=0;
pos.push_back(make_pair(0,-1));
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
    if(a[i]==1){
        pos.push_back(make_pair(sum,i));
    }
    if(sum>=s){
        int p=sum-s;
        pair<int,int> x=make_pair(p,-5);
        auto it=lower_bound(pos.begin(),pos.end(),x);
        int z=i-(*it).second;
        ans=max(ans,z);
    }
}
if(sum<s)
    {
        cout<<-1<<endl;
        continue;
    }
   cout<<n-ans<<endl;
}

return 0;
}