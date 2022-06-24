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
    int n,q;
    cin>>n>>q;
    int len=0;
    // cout<<len<<"\n";
    if(n==1){
        len=1;
    }
    else{
        len=4*(n-1);
    }
    while(q--){
        int t,x;
        cin>>t;
        if(t!=2){
            cin>>x;
        }
        if(t==0){
            pos+=(x%len);
            pos%=len;
        }
        else if(t==1){
            int res=pos-x;
            if(res==0){
                pos=len;
            }
            else if(res<0){
                // cout<<"YO";
                // int moveBack=(pos-1)+(x/len);
                // pos=len+(pos-1-moveBack);
                int rem=(pos-(x%len));
                pos=(len+rem);
            }
            else{
                pos-=(x%len);
            }
        }
        else if(t==2){
            pos=1;
        }    
        // cout<<pos<<"--";    
    }
    cout<<pos<<"\n";
}
return 0;
}