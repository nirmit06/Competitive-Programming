#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    long long int n;
    cin>>n;
    for(int i=2;i<1e8;i++){
        int p=pow(2,i);
        --p;
        if(n%p==0){
            cout<<n/p<<"\n";
            break;
        }
    }


}
return 0;
}