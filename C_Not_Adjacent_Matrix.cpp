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
    ll m = 0;
    ll c = 1;
    ll a[n][n] = {0};
    if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        else if (n == 2)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            
            
            for (int i = 0; i < n; i++,c += 1)
            {
                a[i][i] = c;
            }
            for (int i = 1; i < n; i++)
            {
                for (int j = 0; j < i; j++,c += 2)
                {
                    a[j][i] = c;
                    a[i][j] = c+1;
                }
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
}
return 0;
}