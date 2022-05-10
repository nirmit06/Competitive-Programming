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
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll m;
    cin>>m;
    vector <int> v;
    int element;
    cin>>element;
    v.push_back(element);

    int total=0;
    for(int i=1;i<m;i++){
        int el;
        cin>>el;
        int temp=0;
        int count=0;
        while(temp<v.size()){
            if(el>v[temp]){
                count++;
                temp++;
            }
            else{
                temp++;
            }
        }
        v.push_back(el);
        total+=count;
    }
    
    cout<<total<<"\n";
}
return 0;
}