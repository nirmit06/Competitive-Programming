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
int even_count=0;
int odd_count=0;
int element;
for(int i=0;i<2*n;i++){
    cin>>element;
    element%2==0?even_count++:odd_count++;
}

even_count==odd_count?cout<<"Yes"<<"\n":cout<<"No"<<"\n";
}
return 0;
}