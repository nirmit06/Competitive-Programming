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
int n,q;
cin>>n>>q;

vector <int> v(n);

for(int i=0;i<n;i++){
    cin>>v[i];
}

sort(v.rbegin(),v.rend());
int sum=0;
for(int i=0;i<n;i++){
    sum+=v[i];
    v[i]=sum;
}

while(q--){
    ll req_sum;
    cin>>req_sum;

    ll ans=-1;
    ll first=0,second=n-1;

    while(second>=first){
        ll mid=((first)+(second-first))/2;
        if(v[mid]>=req_sum){
            ans=mid+1;
            second=mid-1;
        }
        else{
            first=mid+1;  
        }
    }
    cout<<ans<<"\n";
}


}
return 0;
}