#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define ll long long int
#define in(a) long long int a;cin>>a;
#define inn(a,b) long long int a,b;cin>>a>>b;
#define innn(a,b,c) long long int a,b,c;cin>>a>>b>>c;
#define out(a) cout<<a<<"\n";
#define outt(a,b) cout<<a<<" "<<b<<"\n";
#define outtt(a,b,c) cout<<a<<" "<<b<<" "<<c<<"\n";
#define whil(t) while(t-->0)
#define infor(variable,start,end) for(long long int variable=start;variable<end;variable++)
#define defor(variable,start,end) for(long long int variable=start;variable>end;variable--)
#define inefor(variable,start,end) for(long long int variable=start;variable<=end;variable++)
#define deefor(variable,start,end) for(long long int variable=start;variable>=end;variable--)
#define inarr(a,n) for(long long int i=0;i<n;i++){cin>>a[i];}
#define outarr(a,n) for(long long int i=0;i<n;i++){cout<<a[i]<<" ";}cout<<"\n";
#define vi(vi) vector<long long int>vi;
#define invec(a,n) for(long long int i=0;i<n;i++){int r;cin>>r;a.push_back(r);}
#define outvec(a,n) for(long long int i=0;i<n;i++){cout<<a[i]<<" ";}cout<<"\n";

string int2binary(ll num)
{
    string str= bitset<64>(num).to_string();
    return str;
}

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

int main() {
    in(t)
    whil(t)
    {
        innn(a,b,c)
        string x=int2binary(a);
        string y=int2binary(b);
        string z=int2binary(c);
        reverse(x.begin(),x.end());
        reverse(y.begin(),y.end());
        reverse(z.begin(),z.end());
        ll k=0;
        infor(i,0,60)
        {
            if(x[i]==y[i]&&y[i]!=z[i])
            {
                ll expo=pow(2,i);
                c+=expo;
                string t=int2binary(c);
                reverse(t.begin(),t.end());
                z.assign(t);
            }
            else if(x[i]==z[i]&&y[i]!=z[i])
            {
                ll expo=pow(2,i);
                b+=expo;
                string t=int2binary(b);
                reverse(t.begin(),t.end());
                y.assign(t);
            }
            else if(y[i]==z[i]&&x[i]!=y[i])
            {
                ll expo=pow(2,i);
                a+=expo;
                string t=int2binary(a);
                reverse(t.begin(),t.end());
                x.assign(t);
            }
            else
            {
                for(int j=i+1;j<x.size();j++)
                {
                    if(x[j]==y[j]&&x[j]==z[j])
                    {
                        if(j==x.size()-1)
                        {
                            break;
                        }
                        else
                        {
                            continue;
                        }
                    }
                    else
                    {
                        k=1;
                        break;
                    }
                }
            }
        }
        for(int j=0;j<x.size();j++)
                {
                    if(x[j]==y[j]&&x[j]==z[j])
                    {
                        if(j==x.size()-1)
                        {
                            break;
                        }
                        else
                        {
                            continue;
                        }
                    }
                    else
                    {
                        k=1;
                        break;
                    }
                }
        if(k==0)
        {
            out("YES")
        }
        else
        {
            out("NO")
        }
    }
}
