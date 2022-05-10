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

vector<int> v(n);

for(int i=0;i<n;i++){
    cin>>v[i];
}

int rem_count=0;
int stick_count=0;
map<int,int>m;

for(int i=0;i<n;i++){
    m[v[i]]++;
}
set<int> s;
int left=0;
for(auto x: m){
    stick_count+=x.second/2;
    left+=x.second%2;
    if(x.second%2==1){
        s.insert(x.first);
    }
}
if(stick_count%2==0){
    int p1=(s.size()/2)*2;
    int p2=0;
    if(s.size()%2==1){
        p2=3;
    }
    cout<<p1+p2<<"\n";
}
else{
    int p=s.size();
    int p1=0;
    if(s.size()>=1){
        p1++;
        p--;
    }
    else{
        p1+=2;
    }
    int p2=(p/2)*2;
    int p3=0;
    if(p%2==1){
        p3=3;
    }
    cout<<p1+p2+p3<<"\n";
}
}
return 0;
}