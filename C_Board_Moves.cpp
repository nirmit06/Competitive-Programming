#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll ans = 0;
		for (ll i = 1; i <= n / 2; ++i) {
			ans += i  * i;
		}
		cout << ans * 8 << endl;
}
return 0;
}