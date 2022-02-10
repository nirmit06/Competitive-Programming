#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;
int n,a,ans;

int main(){
    scanf("%d",&n); 
    if(n % 2 == 1){
        puts("0");
        return 0;
    }
    a = n/2;

    if(a % 2 == 0)  ans = a/2 - 1;
    else    ans = a/2;
    printf("%d\n",ans);
    return 0;
}