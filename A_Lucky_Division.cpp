#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
cin>>n;
int temp;
int rem;
bool flag=false;
temp=n;


    while(temp>0){
        rem=temp%10;
        temp=temp/10;
        if(rem==4 || rem==7){
            flag=true;
        }
        else{
            flag=false;
            break;
        }
        
    }
    if(flag==true ){
        cout<<"YES";
    }
    else {
        if(n%4==0 || n %7 ==0 || n %47 ==0 || n %74 ==0){
        cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        
    }
   



return 0;
}