#include<bits/stdc++.h>
#define mod 1000000007
#define pb push_back
#define vi vector<int>
#define ll long long
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
while(t--){
    int n;
    cin>>n;
    int arr[n+1];

    for(int i=1;i<=n;++i){
        cin>>arr[i];
    }
    
    string ans="NO";
    
    map<int,vector<int>> m;
    
    for(int i=1;i<=n;++i){
        m[arr[i]].push_back(i);
    }

    for (auto el : m)
		{
			if (el.second.size() >= 3)
			{
				ans = "YES";
				break;
			}
		}

    for (auto el : m)
		{
			if (el.second.size() == 2 && el.second[0] != el.second[1] - 1)
			{
				ans = "YES";
				break;
			}
		}
 
		cout << ans << '\n';



    
}
return 0;
}