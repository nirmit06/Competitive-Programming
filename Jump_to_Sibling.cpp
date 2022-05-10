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

vector <int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

if(v[0]%2==0 && v[n-1]%2==0 || (v[0]%2==1 && v[n-1]%2==1)){
    int count=0;
    if(v[0]%2==1){
    for(int i=1;i<n;i++){
        if(v[i]&1){
            count++;
        }
    }
    }
    else{
    for(int i=1;i<n;i++){
        if(!(v[i]&1)){
            count++;
        }
    }
    }
    cout<<count<<"\n";
}
else{
    int count=0;
    int ind;
    if(v[n-1]%2==1){
        int odd=0;
        for(int i=n-1;i>=0;i--){
            if(v[i]%2==1){
                ind=i;
                odd++;
                if(odd==2)
                break;
            }
        }

        for(int i=1;i<ind;i++){
            if(v[i]%2==0){
                count++;
            }
        }
        cout<<count+odd<<"\n";
    }
    else{
        int even=0;
        for(int i=n-1;i>=0;i--){
            if(v[i]%2==0){
                ind=i;
                even++;
                if(even==2)
                break;
            }
        }

        for(int i=1;i<ind;i++){
            if(v[i]%2==1){
                count++;
            }
        }
        cout<<count+even<<"\n";
    }

}
}
return 0;
}