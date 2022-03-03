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

vector <int> v(n);
ll sum=0;
for(int i=0;i<n;i++){
    cin>>v[i];
    sum+=v[i];
}

int answer=sum;
int pref=0;
int remaining;
int req_time;
for(int i=0;i<n;i++){
    pref+=v[i];
    remaining=sum-pref;
    req_time=max(remaining,pref);
    answer=min(req_time,answer);
}
cout<<answer<<"\n";



}
return 0;
}