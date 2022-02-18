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

bool valueOf(int number,int position){
    return (number & (1<<position))!=0;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
    int n;
    cin>>n;

    for(int number=0;number<(1<<n);number++){
        cout<<valueOf(number,n-1);
        for(int power=n-2;power>=0;power--){
            cout<<(valueOf(number,power)^valueOf(number,power+1));
        }
        cout<<"\n";
    }
return 0;
}