#include<bits/stdc++.h>
using namespace std;
int main()
{
cin.tie(0);

int t;
cin>>t;
while (t--){
    long int n;
    long long int k;
    
        
        
    
    for (int i=0;i<t;i++){
        cin>>n>>k;
        vector <int> og;
        og.reserve(n);
        for(long int j=1;j<=n;j++)
        {
        og.push_back(j);
        }

        for(long long int i=0;i<k;i++){
            vector <int> odd;
        vector <int> even;
        odd.reserve(n/2);
        even.reserve(n/2);
        for(int l=1;l<=n;l++){
    
            if(l%2!=0){
                int element=og[l-1];
                odd.push_back(element);
            }
            else{
                int element=og[l-1];
                even.push_back(element);
            }
            
        }
        og.clear();
        

        for(int y=0;y<(n/2);y++)
        {
            int element=odd[y];
            og.push_back(element);
        }

        for(int z=0;z<(n/2);z++){
            int element=even[z];
             og.push_back(element);
        }
        odd.clear();
        even.clear();

   
    }
     for(int i=0;i<n;i++){
        cout<<og[i]<<" ";
    }
    cout<<endl;
    og.clear();
    }   
}  
    
return 0;
}