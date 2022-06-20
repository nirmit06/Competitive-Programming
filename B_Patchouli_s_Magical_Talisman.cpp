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
int n;
cin>>n;

vector <int> v(n);
int count_e=0,count_o=0;
int min_count=INT_MAX;
for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]%2!=0){
        count_o++;
    }
    else{
        count_e++;
        int count=0;
        int x=v[i];
        while(x%2==0){
            x/=2;
            count++;
        }
        min_count=min(count,min_count); 
    }
}
    if(count_o>0){
        cout<<count_e<<"\n";
    }
    else{
        cout<<(count_e-1)+min_count<<"\n";
    }
}
return 0;
}