#include <bits/stdc++.h>
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
    cin >> t;
    while (t--)
    {
        ll cH, cD;
        cin >> cH >> cD;

        ll mH, mD;
        cin >> mH >> mD;

        ll coins, attack_plus, health_plus;
        cin >> coins >> attack_plus >> health_plus;

        bool flag=false;

        for (ll i=0;i<=coins;i++){
            ll character_damage=cD+(i*attack_plus);
            ll character_health=cH+((coins-i)*health_plus);
            ll character_moves=(mH/character_damage);
            if(mH%character_damage){
                character_moves++;
            }
            ll monster_moves=(character_health/mD);
            if(character_health%mD){
                monster_moves++;
            }
            if(character_moves<=monster_moves){
                flag=true;
                break;
            }
        }

        if(flag){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}