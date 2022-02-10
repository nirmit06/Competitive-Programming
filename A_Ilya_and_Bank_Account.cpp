#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);

int num;
cin>>num;
int temp=num;
if(num>0){
    cout<<num;
}
else if(abs(num)==10){
    cout<<0;
}
else{
    int dig1=temp%10;
    int a=abs(dig1);
    temp=temp/10;

    int dig2=temp%10;
    int b=abs(dig2);
    temp=temp/10;
  
    int maximum=max(a,b);
    if(maximum==a){
        cout<<(num/10);
    }
    else{ 
        cout<<((-1)*((abs(temp)*10)+a));
    }
}
return 0;
}