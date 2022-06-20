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

if((n%2==0 && x!=1 && x>n/2) || (n%2!=0 && x!=1 && x>((n/2)+1))){
    cout<<-1<<"\n";
}
else{
    string st="";
    if(x==1){
        for(int i=0;i<n;i++){
            st+='a';
        }
    }
    else{
        if(n%2==0){
            int temp=n/2;
            int ind=97;
            char alpha=(char)ind;
            while(temp--){
                st+=ind;
                x--;
                if(ind!=127 && x>0){
                ind+=1;
                }
            }
            string temp_st=st;
            reverse(temp_st.begin(),temp_st.end());
            st+=temp_st;
            
        }
        else{
            int temp=(n/2)+1;
            int ind=97;
            char alpha=(char)ind;
            while(temp--){
                st+=ind;
                x--;
                if(ind!=127 && x>0){
                ind+=1;
                }
                
            }
            string temp_st=st.substr(0,(n/2));
            reverse(temp_st.begin(),temp_st.end());
            st+=temp_st;
        }
        
    }
    cout<<st<<"\n";
}
}
return 0;
}