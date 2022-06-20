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
    int n,x;
    cin>>n>>x;

    vector<int> v(n);
    int total_divisible=0;
    int total_sum=0;

    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%x==0)
            total_divisible++;
        total_sum+=v[i];
    }

    if(total_divisible==n){
        cout<<-1<<"\n";
    }
    else if(total_sum%x){
        cout<<n<<"\n";
    }
    else{
        int mini=0;
        int total=total_sum;

        for(int i=0;i<n;i++){
            total-=v[i];
            if(total%x){
                mini=max(mini,n-i-1);
                break;
            }
        }

        total=total_sum;

        for(int i=n-1;i>=0;i--){
            total-=v[i];
            if(total%x){
                mini=max(mini,i);
                break;
            }
        }
        cout<<mini<<"\n";
    }

        
    
    

}
return 0;
}