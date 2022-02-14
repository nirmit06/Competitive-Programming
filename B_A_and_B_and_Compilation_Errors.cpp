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
ll n;
cin>>n;

vector <ll> v1;
vector <ll> v2;
vector <ll> v3;

for(int i=0;i<n;i++){
    ll element ;
    cin>> element;
    v1.push_back(element);
}
// v1::<intiterator i =find(v1.begin(),v1.end(),element) ;
sort(v1.begin(),v1.end());

for(int i=0;i<n-1;i++){
    int element;
    cin>>element;
    v2.push_back(element);
}
sort(v2.begin(),v2.end());

for(int i=0;i<n-2;i++){
    int element;
    cin>>element;
    v3.push_back(element);
}
sort(v3.begin(),v3.end());

ll i=0;
ll j=0;
while(v1[i]==v2[j]){
    i++;
    j++;
}

cout<<v1[i]<<"\n";

i=0;
j=0;
while(v2[i]==v3[j]){
    i++;
    j++;
}

cout<<v2[i]<<"\n";






return 0;
}