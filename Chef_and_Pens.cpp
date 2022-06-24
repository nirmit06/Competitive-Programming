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
    int i=0,j=n-1;
    int ladd=0,radd=0;
    while(i<=j){
        if(ladd<=radd){
            ladd+=v[i];
            i++;
            
        }
        else{
            radd+=v[j];
            j--;
        }
    }
    // cout<<ladd<<" "<<radd<<"\n";
    // cout<<abs(ladd-radd)<<"\n";
    if(abs(ladd-radd)==1 || abs(ladd-radd)==0){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    }
}
return 0;
}