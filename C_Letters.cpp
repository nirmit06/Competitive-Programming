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

    ll n, m;
    cin >> n >> m;

    vector<ll> dorm(n);
    vector<ll> letter_no(m);

    for (ll i = 0; i < n; i++)
    {
        cin >> dorm[i];
    }

    for (ll i = 0; i < m; i++)
    {
        cin >> letter_no[i];
    }

    vector<ll> sum;
    sum.push_back(0);
    ll temp = 0;
    for (ll i = 0; i < n; i++)
    {
        temp += dorm[i];
        sum.push_back(temp);
    }

    ll ind = 0;

    while (m--)
    {
        ll l = 1;
        ll r = n;

        while (l < r)
        {
            ll mid = (l + r) / 2.0;
            
            if (letter_no[ind]<=sum[mid]){
                r=mid-1;
            }
            else if(letter_no[ind]>sum[mid]){
                l=mid+1;
            }
            // cout<<mid<<"--";

        }
        // cout<<"\n";
        temp=sum[l]-sum[l-1];
        // cout<<sum[l]<<"--";
        if(letter_no[ind]>sum[l]){
            cout<<l+1<<" ";
            cout<<letter_no[ind]-sum[l]<<"\n";
        }
        else{
            cout<<l<<" ";
            cout<<letter_no[ind]-sum[l-1]<<"\n";
        }
        ind++;
    }

    return 0;
}