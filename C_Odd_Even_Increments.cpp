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

bool par1=true;
bool par2=true;
vector <int> even;
vector <int> odd;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    if((i+1)%2==0){
        even.push_back(arr[i]);
    }
    else{
        odd.push_back(arr[i]);
    }
}


for(int i=0;i<odd.size()-1;i++){
    if(odd[i]%2!=odd[i+1]%2){
        par1=false;
        break;
    }
}

for(int i=0;i<even.size()-1;i++){
    if(even[i]%2!=even[i+1]%2){
        par2=false;
        break;
    }
}

if(par1==true && par2==true){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}
}
return 0;
}