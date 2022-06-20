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
        map<int, bool> mp;
        vector<int> temp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> temp[i];
            mp[temp[i]] = false;
        }

        vector<int> v;

        if (n == 1)
        {
            cout << -1 << "\n";
        }
        else
        {
            for (int i = 0; i < n-1; i++)
            {
                int cur = temp[i];
                int mn = INT_MAX;
                for (auto x : temp)
                {
                    if (x == cur)
                    {
                        continue;
                    }
                    else
                    {
                        if (mp[x] == false)
                            mn = min(mn, x);
                    }
                }
                mp[mn] = true;

                v.push_back(mn);
            }

            for(auto x:temp){
                if(mp[x]==false){
                    v.push_back(x);
                }
            }

        for(int i=0;i<n;i++){
        if(temp[i]==v[i]){
            int t=v[i];
            v[i]=v[i-1];
            v[i-1]=t;
        }
        }

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
        }
    }

return 0;
}