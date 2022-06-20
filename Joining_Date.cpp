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
        int n;
        cin>>n;
        int k;
        cin>>k;

        if(n==k){
            cout<<0<<"\n";
        }
        else if(n<=5){
            cout<<0<<"\n";
        }
        else {
            int group;
            if(n%5==0){
                group=n/5;
            }
            else{
                group=(n/5)+1;
            }

            int k_group;
            
            if(k%5==0){
                k_group=k/5;
            }
            else{
                k_group=(k/5)+1;
            }

            cout<<abs(k_group-group)<<"\n";
        }
    }
    return 0;
    }