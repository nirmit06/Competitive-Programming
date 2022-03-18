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
int n;
cin>>n;

ll home[n];
ll away[n];

for(int i=0;i<n;i++){
    cin>>home[i];
    cin>>away[i];
}
ll count=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(j!=i &&home[i]==away[j]){
            count++;
        }
    }
}
cout<<count;
return 0;
}