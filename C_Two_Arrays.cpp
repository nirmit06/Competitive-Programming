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

int arr1[n];
int arr2[n];

for(int i=0;i<n;i++){
    cin>>arr1[i];
}

for(int i=0;i<n;i++){
    cin>>arr2[i];
}

sort(arr1,arr1+n);
sort(arr2,arr2+n);
bool check=true;
for(int i=0;i<n;i++){
    if(arr1[i]==arr2[i] ||arr2[i]-1==arr1[i]){
        continue;
    }
    else{
        check=false;
        break;
    }
}
if(check==true){cout<<"YES"<<"\n";}
else{
    cout<<"NO"<<"\n";
}
}
return 0;
}