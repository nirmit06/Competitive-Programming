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

    string s;
    cin>>s;
    string st="";
    for(int i=0;i<n;i+=2){
        if(s[i]=='0' && s[i+1]=='0'){
            st.push_back('A');
        }
        else if(s[i]=='0' && s[i+1]=='1'){
            st.push_back('T');
        }
        else if(s[i]=='1' && s[i+1]=='0'){
            st.push_back('C');
        }
        else{
            st.push_back('G');
        }
    }
    cout<<st<<"\n";
}
return 0;
}