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
while(t--)
{
    cout << fixed << setprecision(10);
    int n;
    cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		int mx = v[0];
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] > mx)
				mx = v[i];
			sum += v[i];
		}
		cout << 1.0 * (sum - mx) / (n - 1) + mx << endl;
}
return 0;
}