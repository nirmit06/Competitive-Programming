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

string s;
cin>>s;
int odd_1=0,odd_0=0;
for(int i=0;i<n;i+=2){
    if(s[i]=='1'){
        odd_1++;
    }
    else{
        odd_0++;
    }
}
int even_1=0,even_0=0;
for(int i=1;i<n;i+=2){
     if(s[i]=='1'){
        even_1++;
    }
    else{
        even_0++;
    }
}



// cout<<max(min(even_0,odd_1),min(even_1,odd_0))<<"\n";

}
return 0;
}