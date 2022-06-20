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
        ll a, b;
        cin >> a >> b;

        if (a % 3 == 0 || b % 3 == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            int count = 0;
            while (a % 3 != 0 && b % 3 != 0)
            {
                int mx = max(a, b);
                if (mx == a)
                {
                    a = abs(a - b);
                }
                else
                {
                    b = abs(a - b);
                }
                count++;
            }
            cout << count << "\n";
        }
    }
    return 0;
}