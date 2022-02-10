#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);

int n;
cin>>n;

bitset<64> b=n;

cout<<b.count()<<endl;
return 0;
}