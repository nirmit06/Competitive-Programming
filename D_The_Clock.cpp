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
    int hr,mn,x;
    char c;
    cin>>hr>>c>>mn>>x;

    vector <bool> visited(1440,false);
    int ans=0;
    int temp=hr*60+mn;
    visited[temp]=true;
    while(true){
        temp+=x;
        temp%=1440;
        if(visited[temp]==true){
            break;
        }
        visited[temp]=true;
    }

    for(int i=0;i<1440;i++){
        if(visited[i]){
        int hh=i/60,mm=i%60;
        if(hh/10==mm%10 && mm/10==hh%10){
            ans++;
        }
        }
    }

    cout<<ans<<"\n";

}
return 0;
}