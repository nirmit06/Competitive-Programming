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
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

bool flag=true;

int r_25=0;
int r_50=0;
int r_100=0;

for(int i=0;i<n;i++){
    if(arr[i]==25){
        r_25++;
    }
    else if(arr[i]==50){
        
        if(r_25>0){
            r_50++;
            r_25--;
        }
        else{
            flag=false;
            break;
        }
    }
    else{
        if(r_50>0 &&r_25>0){
            r_50--;
            r_25--;
        }
        else if(r_25>2){
            r_25-=3;
        }
        else{
            flag=false;
            break;
        }
    }
}

if(flag){
    cout<<"YES"<<"\n";
}
else
cout<<"NO"<<"\n";
return 0;
}