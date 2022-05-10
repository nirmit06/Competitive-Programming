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

vector <int> v(n);

for(int i=0;i<n;i++){
cin>>v[i];
}

if(n==1){
    cout<<"YES"<<"\n";
}
else{
    bool ok=true;
    bool dif_one=false;
    for(int i=1;i<n;i++){
        int dif=v[i]-v[i-1]-1;
        if(dif<=0){
            continue;
        }
        else if(dif==1 && dif_one==false){
            v[i-1]=v[i-1]+1;
            dif_one=true;
        }
        else if(dif==2){
            v[i]=v[i]-1;
            v[i-1]=v[i-1]+1;
        }
        else{
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}
}
return 0;
}