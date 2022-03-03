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

int a[n];

for(int i=0;i<n;i++){
    cin>>a[i];
}

vector <bool> chk(31);

for(int i=0;i<n;i++){
    for(int j=0;j<31;j++){
        if(a[i] & (1<<j)){
            chk[j]=true;
        }
    }
}

int answer=0;

for(int i=0;i<31;i++){
    if(chk[i]){
        answer+=(1<<i);
    }
}

cout<<answer<<"\n";

}
return 0;
}