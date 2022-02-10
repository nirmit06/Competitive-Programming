#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);
int n,l,k;
cin>>n>>l>>k;
vector <int> v1;
vector <int> v2;
int element;
int sum=0;
for(int i=0;i<n;i++){
    v1.push_back(element);
}
for(int i=0;i<n;i++){
    v2.push_back(element);
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
if(k==0 && i==0){ 
    sum=sum+(v1[i+1]*v2[j]);
}
else{
    sum=sum+(v1[i+1]*(v2[j]));
}


}

}
cout<<sum;

return 0;
}