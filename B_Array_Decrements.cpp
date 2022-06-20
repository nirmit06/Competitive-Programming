#include <bits/stdc++.h>
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
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int ans=0;

        for(int i=0;i<n;i++){
            ans=max(ans,a[i]-b[i]);
        }

        for(int i=0;i<n;i++){
            a[i]=max(0,a[i]-ans);
        }
        bool ok=true;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                cout<<"NO"<<"\n";
                ok=false;
                break;
            }
        }

        if(ok){
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}