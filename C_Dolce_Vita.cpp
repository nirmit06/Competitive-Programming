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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int i = 0;
        bool shop = true;

        while (shop == true)
        {
            int sum = 0;
            int temp_count = 0;
            if (v[i] <= x)
            {
                sum += v[i];
                i++;
                count++;
                temp_count++;
            }

            while (sum + v[i] <= x && i < n)
            {
                sum += v[i];
                count++;
                temp_count++;
                i++;
            }
            for(int i=0;i<n;i++){
                v[i]=v[i]+1;
            }
            if (temp_count == 0)
            {
                shop = false;
            }
            i = 0;
        }

        cout << count << "\n";
    }
    return 0;
}