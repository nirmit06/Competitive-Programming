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

for(int i=0;i<n;i++){
    cin>>v[i];
}

vector <int> temp=v;
sort(temp.begin(),temp.end());

int count=0;
vector <int> store;
int ind;
int last;
for(int i=0;i<n;i++){
    if(temp[i]<=0){
        count++;
        store.push_back(temp[i]);
        ind =i;
        last=temp[i+1];
    }
}

int max_dif=INT_MIN;

bool flag=true;
for(int i=1;i<n;i++){
    if(temp[i]<=0)
        flag&=(temp[i]-temp[i-1] >= last);
}

if(flag && count!= temp.size())
cout<<count+1<<"\n";
else
cout<<count<<"\n";
}
return 0;
}