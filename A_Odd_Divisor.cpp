#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
long long int n;
while(t--){
    cin>>n;
    
    if (ceil(log2(n)) == floor(log2(n)))
    {
      cout<<"NO\n";
    }
    else
    {
      cout << "YES\n";
    }
    

    
    
}
return 0;
}