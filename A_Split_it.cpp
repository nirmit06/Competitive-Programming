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
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(2*k>=n){ 
        cout<<"NO"<<"\n";
        return ;
    }
    else{
        for(int i=0;i<k;i++){
            if(s[i]==s[n-1-i]) continue;
            else{
                cout<<"NO"<<"\n";
                return ;
            }
        }
        cout<<"YES"<<"\n";
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
solve();

}
return 0;
}   