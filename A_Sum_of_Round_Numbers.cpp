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
string n;
cin>>n;
int j=0;
int count=0;
for(int j=0;j<n.length();j++){
        if(n[j]!='0'){
            count++;
            }
    }

    cout<<count<<"\n";
for(int i=n.length()-1;i>=0;i--){
    int temp;
    

    

    if(n[i]!='0'){
        temp=pow(10,j)*(int(n[i]-'0'));
        cout<<temp<<" ";
    }
    
    j++;
}
cout<<endl;

}
return 0;
}