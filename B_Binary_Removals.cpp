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
    string s;
    cin>>s;
    
    int count_11=s.find("11");
    int count_00=s.rfind("00");

    count_11!=-1 && count_00!=-1 && count_11<count_00?cout<<"NO"<<"\n":cout<<"YES"<<"\n";
    
    
}
return 0;
}