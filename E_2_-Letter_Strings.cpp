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
vector<string> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int count=0;
for(int i=0;i<n-1;i++){
    string first=v[i];
    set <char> st;
    
    for(int j=i+1;j<n;j++){
        st.insert(first[0]);
        st.insert(first[1]);
        string second=v[j];
        st.insert(second[0]);
        st.insert(second[1]);
        if(first[0]==first[1] && second[0]==second[1] && first[0]!=second[0]){
            continue;
        }
        else if(st.size()==3 && ((find(second.begin(),second.end(),first[0])!=second.end()) || (find(second.begin(),second.end(),first[1])!=second.end()) )){
            cout<<first<<" "<<second<<"\n";
            count++;
        }
        else if(st.size()==2){
            if(first[0]==second[0] || first[0]==second[1] && first!=second){
            cout<<first<<" "<<second<<"\n";
            count++;
            }
        }
        st.clear();
    }

}
cout<<count<<"\n";
}
return 0;
}