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
int n,m,z;
cin>>n>>m>>z;

int arr[m+1];

for(int i=0;i<m+1;i++){
    cin>>arr[i];
}

ll dif=0;
ll count=0;
bitset <64> a(arr[m]);
for(int i=0;i<m;i++){
        bitset <64> b(arr[i]);
        for(int k=0;k<64;k++){
            if(a[k]^b[k]!=0){
                dif++;
            }
        }
        if(dif<=z){
            count++;
        }
    
    dif=0;
}

cout<<count<<"\n";
return 0;
}