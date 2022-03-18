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
        ll n, x;
        cin >> n >> x;
        int temp = n;
        int maximum = n * 3;
        int a = n, b = 0, c = 0;
        if (maximum < x)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            int required = maximum - x;
            if (required <= 2 && required != 0)
            {
                cout << "NO"
                     << "\n";
            }
            else
            {
                if (required % 3 == 0)
                {
                    c += (required / 3);
                    a -= (required / 3);
                    cout << "YES"
                             << "\n";
                        cout << a << " " << b << " " << c << "\n";
                }
                else if (required % 4 == 0)
                {
                    b += (required / 4);
                    a -= (required / 4);
                    cout << "YES"
                             << "\n";
                        cout << a << " " << b << " " << c << "\n";
                }
                else
                {
                    int mo7 = required % 7;
                    if (mo7 == 0)
                    {
                        b += (required / 7);
                        c += (required / 7);
                        a -= (2 * (required / 7));
                        cout << "YES"
                             << "\n";
                        cout << a << " " << b << " " << c << "\n";
                    }
                    else
                    {
                        if (mo7 > 2 && mo7 != 5)
                        {
                            b += (required / 7);
                            c += (required / 7);
                            a -= (2 * (required / 7));
                            if (mo7 % 3 == 0)
                            {
                                a -= (mo7 / 3);
                                c += (mo7 / 3);
                            }
                            else if (mo7 % 4 == 0)
                            {
                                a -= (mo7 / 4);
                                b += (mo7 / 4);
                            }
                            cout << "YES"
                                 << "\n";
                            cout << a << " " << b << " " << c << "\n";
                        }
                        else
                        {
                            cout << "NO"
                                 << "\n";
                        }
                    }
                }
            }
        }
    }
    return 0;
}