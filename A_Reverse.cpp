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

    int search=-1,start=-1,last=-1;

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        if(v[i]!=i+1){
            search=i+1;
            start=i;
            break;
        }
    }

    if(search==-1){
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(v[i]==search){
                last=i;
                break;
            }
        }
        reverse(v.begin()+start,v.begin()+last+1);
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
    }
    cout<<endl;
    
}
return 0;
}