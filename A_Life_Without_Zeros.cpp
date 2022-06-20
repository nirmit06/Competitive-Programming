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
ll a,b;
cin>>a>>b;
bool ok=true;

int sum=a+b;
int temp1=a;
int temp2=b;
int x=0,y=0;
int ind1=0;
int ind2=0;
while(temp1>0){
    if(temp1%10!=0){
        x+=((temp1%10)*pow(10,ind1));
        ind1++;
    }
    temp1/=10;
}

while(temp2>0){
    if(temp2%10!=0){
        y+=((temp2%10)*pow(10,ind2));
        ind2++;
    }
    temp2/=10;
}
int z=0;
int temp3=sum;
int ind3=0;
while(temp3>0){
    if(temp3%10!=0){
        z+=((temp3%10)*pow(10,ind3));
        ind3++;
    }
    temp3/=10;
}
// cout<<x<<" "<<y<<"\n";
if(z==(x+y)){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}
return 0;
}