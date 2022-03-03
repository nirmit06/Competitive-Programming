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

string s;
cin>>s;

int Anton=0;
int Danik=0;

for(int i=0;i<n;i++){
    if(s[i]=='A'){
        Anton++;
    }
    else{
        Danik++;
    }
}

if(Anton>Danik){
    cout<<"Anton"<<"\n";
}
else if(Anton<Danik){
    cout<<"Danik"<<"\n";
}
else{
    cout<<"Friendship"<<"\n";
}
return 0;
}