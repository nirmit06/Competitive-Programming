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
    int n,l;
    cin>>n>>l;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0;
    
    vector <int> v;

    for(int i=0;i<n-1;i++){
        string s1=arr[i];
        for(int j=i+1;j<n;j++){
            string s2=arr[j];
            // cout<<s1<<"--"<<s2<<"--\n";
            for(int k=0;k<l;k++){
            if(s1[k]>s2[k]){
                sum+=((s1[k]-'a')-(s2[k]-'a'));
            }
            else{
                sum+=((s2[k]-'a')-(s1[k]-'a'));
            }
            }

            v.push_back(sum);
            sum=0;
        }
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<"\n";
}
return 0;
}