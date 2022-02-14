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
string s;
cin>>s;
ll arr[s.length()+1];
 arr[0]=0;
ll sum=0;
for(int i=0;i<s.length()-1;i++){
    if(s[i]==s[i+1]){
        sum++;
    }
    arr[i+1]=sum;
}

ll m;
cin>>m;
for(int i=0;i<m;i++ ){
    ll l,r;
    cin>>l>>r;
    cout<<arr[r-1]-arr[l-1]<<"\n";
}


return 0;
}