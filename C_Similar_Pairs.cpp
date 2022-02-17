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
        int n;
        cin >> n;

        vector<int> v(n);
        vector<int> even;
        vector<int> odd;
        
        for (int i = 0; i < n; i++)
        {
            int element;
            cin >> element;
            v[i]=element;
            if (element % 2 == 0)
            {
                even.push_back(v[i]);
            }
            else
            {
                odd.push_back(v[i]);
            }
        }

        if (even.size() % 2 == 0 && odd.size() % 2 == 0)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            bool flag = false;
            sort(v.begin(), v.end());
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i + 1] - v[i] == 1)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
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
    }
    return 0;
}