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
int n,m,t;
cin>>n>>m;

int a[100005], d[100005] = {0};
    bool v[100005];

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = n; i >= 1; i--)
    {
        if (!v[a[i]])
          d[i]++;
        v[a[i]] = true;
    }

    for (int i = n; i >= 1; i--)
        d[i] += d[i + 1];

    for (int i = 0; i < m; i++)
    {
        cin >> t;
        cout << d[t] << endl;
    }
return 0;
}