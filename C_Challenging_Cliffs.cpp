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
vector <int> v(n);
bool ok=false;
// ll ind1,ind2;
for(int i=0;i<n;i++){
    cin>>v[i];
}

sort(v.begin(),v.end());
vector <int> temp=v;
int ind1,ind2;
for(int i=0;i<n-1;i++){
    if(temp[i]==temp[i+1] && ok==false){
        ind1=temp[i];
        ind2=temp[i+1];
        temp.erase(temp.begin()+i);
        temp.erase(temp.begin()+i);
        ok=true;
        break;
        
    }
}
int ind3;
bool check=false;
for(int i=0;i<n;i++){
    if(temp[i]>=ind1 && check==false && ok==true){
        ind3=temp[i];
        temp.erase(temp.begin()+i);
        check=true;
        break;
    }
}
if(ok)
cout<<ind1<<" ";
if(check)
cout<<ind3<<" ";
for(int i=0;i<temp.size();i++){
    cout<<temp[i]<<" ";
}
if(ok)
cout<<ind2<<"\n";
}
return 0;
}