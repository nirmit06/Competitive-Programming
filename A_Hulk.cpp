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

    int n;
    cin>>n;

    for(int i=1;i<n;i++){
        if(i%2!=0){
            cout<<"I hate that ";
        }
        else{
            cout<<"I love that ";
        }
    }

    if(n%2==0){
        cout<<"I love it";
    }
    else {
        cout<<"I hate it";
    }

return 0;
}