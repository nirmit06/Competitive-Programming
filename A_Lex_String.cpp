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
    ll n,m,k;
    cin>>n>>m>>k;

    string a,b;
    cin>>a>>b;
    string c="";

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int counter_1=k;
    int counter_2=k;
    int i=0,j=0;
    while(i<n && j<m){
        if(counter_1==0){
            c+=b[j];
            j++;
            counter_1=k;
            counter_2--;
        }
        else if(counter_2==0){
            c+=a[i];
            i++;
            counter_2=k;
            counter_1--;
        }
        else if(a[i]<b[j] && counter_1!=0){
            c+=a[i];
            counter_1--;
            counter_2=k;
            i++;
        }
        else {
            c+=b[j];
            counter_2--;
            counter_1=k;
            j++;
        }
        
    }

    
    cout<<c<<"\n";
}
return 0;
}