#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(0);

	string s ;
	cin>>s;

	string s1 = "hello";

	int cnt = 0;
	int p = 0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i] == s1[p] && cnt<6)
		{
			cnt++;
			p++;
		}
	}
	
	if(cnt == 5)
	{
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	 
	



return 0;
}