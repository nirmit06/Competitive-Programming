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
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        bool ok = false;
        // cout << x1 << " " << x2 << " " << y1 << " " << y2 << "\n";
        if (abs(x1 - x2 )== 1 && abs(y1 - y2 )== 1)
        {
            ok = true;
        }
        else if ((abs(x1 - x2 )== 4 && abs(y1 - y2 )== 0) || (abs(x1 - x2 )== 0 && abs(y1 - y2) == 4))
        {
            ok = true;
        }
        else if ((abs(x1 - x2 )== 4 && abs(y1 - y2 )== 2) || (abs(x1 - x2 )== 2 && abs(y1 - y2) == 4))
        {
            ok = true;
        }
        else if ((abs(x1 - x2 )== 3 && abs(y1 - y2 )== 1) || (abs(x1 - x2 )== 1 && abs(y1 - y2 )== 3))
        {
            ok = true;
        }
        else if ((abs(x1 - x2 )== 2 && abs(y1 - y2 )== 0) || (abs(x1 - x2 )== 0 && abs(y1 - y2 )== 2))
        {
            ok = true;
        }
        else if ((abs(x1 - x2 )== 1 && abs(y1 - y2 )== 3) || (abs(x1 - x2 )== 3 && abs(y1 - y2 )== 1))
        {
            ok = true;
        }
        else if (abs(x1 - x2 )== 3 && abs(y1 - y2 )== 3)
        {
            ok = true;
        }

        if (ok)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}