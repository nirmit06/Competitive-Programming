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
    ll n;
    cin>>n;

    vector <int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int sum=0;
    int count=0;
    vector <int> temp;
    for(int i=0;i<n;i++){
        sum+=v[i];
        temp.push_back(v[i]);
        while(sum>3){
            // cout<<temp.front()<<"--";
            sum-=temp.front();
            temp.erase(temp.begin());
            count++;
        }
    }

    // for(int i=0;i<temp.size();i++){
    //     cout<<temp[i]<<"--";
    // }
    cout<<count<<"\n";
return 0;
}