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
string s;
cin>>s;

string temp=s;

sort(s.begin(),s.end());

if(s.length()%2==0){
for(int i=0;i<s.length()/2;i++){
    
    if(temp[i]>temp[s.length()-i-1]){
        char temp1=temp[i];
        temp[i]=temp[s.length()-i-1];
        temp[s.length()-i-1]=temp1;
    }
}
}
else{
    for(int i=0;i<(s.length()-1)/2;i++){
    
    if(temp[i]>temp[s.length()-i-1]){
        char temp1=temp[i];
        temp[i]=temp[s.length()-i-1];
        temp[s.length()-i-1]=temp1;
    }

}
}

if(temp==s){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}


}
return 0;
}