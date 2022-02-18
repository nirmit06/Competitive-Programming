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

string s;
cin>>s;
map<char,int> m;

for(int i=0;i<s.length();i++){
        ++m[s[i]];
    }
    int count_even=0;
    int count_odd=0;
    for(auto x:m){
        if(x.second%2==0){
            ++count_even;
        }
        else{
            ++count_odd;
        }
    }
if(s.length()%2==0){ 
    
    if(count_odd!=0){
        cout<<"NO SOLUTION"<<"\n";
    }
    else{
        string answer="";

        for(auto x: m){
            for(int i=0;i<(x.second/2);i++){
                answer+=x.first;
            }
        }
        string temp=answer;
        reverse(temp.begin(),temp.end());
        answer+=temp;
        cout<<answer<<"\n";
    }
}
else{
    if(count_odd>1){
        cout<<"NO SOLUTION"<<"\n";
    }
    else{
        string answer="";
        for(auto x: m){
            for(int i=0;i<(x.second/2);i++){
                answer+=x.first;
            }
        }
        string temp=answer;
        for(auto x: m){
            if(x.second%2==1){
                answer+=x.first;
                break;
            }
        }
        reverse(temp.begin(),temp.end());
        
        answer+=temp;
        cout<<answer<<"\n";
    }
}


return 0;
}