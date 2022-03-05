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

int p,q;
cin>>p;
set<int> s;
for(int i=0;i<p;i++){
    int element;
    cin>>element;
    s.insert(element);
}
cin>>q;
for(int i=0;i<q;i++){
    int element;
    cin>>element;
    s.insert(element);
}

if(s.size()==n){
    cout<<"I become the guy.";
}
else{
    cout<<"Oh, my keyboard!";
}

return 0;
}