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
int fd;
cin>>fd;

vector <int> v(fd);



int holiday=8+fd;
for(int i=0;i<fd;i++){
    cin>>v[i];
    if(v[i]==6 || v[i]==7 || v[i]==13 || v[i]==14 ||v[i]==20 ||v[i]==21 || v[i]==27 ||v[i]==28){
        holiday--;
    }
}
cout<<holiday<<"\n";
}
return 0;
}