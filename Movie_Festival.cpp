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

bool cmp(pair<int,int> &a,pair<int,int> &b){
    return a.second<b.second;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
cin>>n;

vector<pair<int,int>> p(n);

for(int i=0;i<n;i++){
    cin>>p[i].first>>p[i].second;
}

sort(p.begin(),p.end(),cmp);

int i=0;
int timeOfLastMovie=-1;
int count=0;

while(i<n){
    if(p[i].first>=timeOfLastMovie){
        ++count;
        timeOfLastMovie=p[i].second;
        
        i++;
    }
    else{i++;}
}

cout<<count<<"\n";


return 0;
}