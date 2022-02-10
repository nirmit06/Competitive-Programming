#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

ll n,m,k;
cin>>n>>m>>k;

vector <ll> applicant(n);
vector <ll> apartment(m);

for(int i=0;i<n;i++){
    cin>>applicant[i];
}

for(int j=0;j<m;j++){
    cin>>apartment[j];
}

sort(apartment.begin(),apartment.end());
sort(applicant.begin(),applicant.end());

ll i=0;
ll j=0;
ll count=0;

while(i<n){
    while(j<m && apartment[j] < applicant[i]-k){
        j++;
    }
    if(abs(apartment[j]-applicant[i])<=k){
        count++;
        i++;
        j++;
    }
    else{
        i++;
    }
}
cout<<count<<"\n";
return 0;
}