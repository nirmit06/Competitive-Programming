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

    int a,b;
    cin>>a>>b;
    if(a==1 && b==1){
        cout<<"https://discuss.codechef.com"<<"\n";
    }
    else if(a==1){
        cout<<"https://www.codechef.com/contests"<<"\n";
    }
    else if(b==1){
        cout<<"https://www.codechef.com/practice"<<"\n";
    }
    


return 0;
}