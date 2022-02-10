#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

vector<int> num1;
vector<int> num2;
string a;
string b;

cin>>a>>b;

for (int i = 0; i < a.length(); i++)
{
    num1.push_back((int)a[i]);
}

for (int i = 0; i < b.length(); i++)
{
    num2.push_back((int)b[i]);
}


vector <int> num3;

for(int i=0;i<a.length();i++){
    if(num1[i]==num2[i]){
        num3.push_back(0);
    }
    else{
        num3.push_back(1);
    }
}

for(int i=0;i<a.length();i++){
    cout<<num3[i];
}
return 0;
}