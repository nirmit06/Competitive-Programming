#include<bits/stdc++.h>

#define ll long long
#define mod 1000000007
using namespace std;
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
long long lcm(ll int a, ll int b)
{
    return (a / gcd(a, b)) * b;
}
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
    int a,b;
    cin>>a>>b;

    set <int> st;

    int dif=abs(a-b);

    while(dif--){
        st.insert(gcd(a,b));
        a++;
        b++;
    }

    cout<<st.size()<<"\n";

}
return 0;
}