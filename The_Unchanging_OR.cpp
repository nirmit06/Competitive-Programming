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

bitset<64> b(n);
int pos=0;
for(int i=1;i<64;i++){
    if(b[i]==1){
        pos=i+1;
    }
}
int temp=1;

for(int i=1;i<pos;i++){
    temp=(temp<<1)|1;
}
bitset <64> t(n-1);
int pos1=0;
for(int i=1;i<64;i++){
    if(t[i]==1){
        pos1=i+1;
    }
}

if(n==2){
    cout<<0<<"\n";
}
else if(n%2!=0){
    cout<<__builtin_popcount(temp)-1<<"\n";
}
else{
    if(pos1<pos){
        cout<<__builtin_popcount(temp)-2<<"\n";
    }
    else{
        cout<<__builtin_popcount(temp)-1<<"\n";
    }
}
// cout<<pos<<" "<<pos1<<"--"<<"\n";

}
return 0;
}