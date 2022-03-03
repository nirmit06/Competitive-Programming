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
int n,h;
cin>>n>>h;
int width=0;
for(int i=0;i<n;i++){
    int element;
    cin>>element;
    if(element>h){
        width+=2;
    }
    else{
        width++;
    }
}
cout<<width<<"\n";
return 0;
}