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

vector <int> v(n);
int maximum=INT_MIN;
for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]>maximum){
        maximum=v[i];
    }
}

sort(v.rbegin(),v.rend());
int sum=0;
for(int i=1;i<n;i++){
    sum+=(maximum-v[i]);
}

cout<<sum;
return 0;
}