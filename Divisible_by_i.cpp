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
ll n;
cin>>n;
int dif=n-1;
int count=n-1;
vector<int> v;
v.push_back(n);
int temp=0;
int x=n;
while(count--){
    
    if(temp==0){
    v.push_back(x-dif);
    temp=1;
    x=x-dif;
    }
    else{
        v.push_back(x+dif);
        temp=0;
        x=x+dif;
        
    }
    dif--;
    
}

reverse(v.begin(),v.end());

for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
cout<<"\n";

}
return 0;
}