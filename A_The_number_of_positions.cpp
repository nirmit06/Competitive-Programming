#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int n,a,b;
cin>>n>>a>>b;

cout<<n - max(a + 1, n - b) + 1;

return 0;
}