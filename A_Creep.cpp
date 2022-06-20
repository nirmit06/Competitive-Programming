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

        bool ok = 0;

        string st = "";
        int total = a + b;
        while (total--)
        {
            if (ok == 0 && a > 0)
            {
                st += '0';
                ok = 1;
                a--;
            }
            else if (ok == 1 && b > 0)
            {
                st += '1';
                ok = 0;
                b--;
            }
            else
            {
                while (a > 0)
                {
                    st += '0';
                    ok = 1;
                    a--;
                }
                while (b > 0)
                {
                    st += '1';
                    ok = 0;
                    b--;
                }
            }
        }
        cout << st << "\n";
    }
    return 0;
}