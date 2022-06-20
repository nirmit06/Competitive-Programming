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
string s;
cin>>s;
int mn=INT_MAX;
    
    int temp=k;
    int j=0;
    int count_W=0;
    while(temp--){
        if(s[j]=='W'){
            count_W++;
        }
        j++;
    }
    // int first=s[0];
    mn=min(mn,count_W);
    for(int i=1;i<=n-k;i++){
        if(s[i-1]=='W'){
            count_W--;
        }

        if(s[i+k-1]=='W'){
            count_W++;
        }
        mn=min(mn,count_W);
    }
    
cout<<mn<<"\n";
}
return 0;
}