#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        int d1, d2, d3;
        int s1, s2, s3;
        cin >> d1 >> d2 >> d3 >> s1 >> s2 >> s3;

        int total1 = 0;
        int total2 = 0;

        total1 = d1 + d2 + d3;
        total2 = s1 + s2 + s3;

        if (total1 != total2)
        {
            int temp;
            temp = (total1 > total2 ? total1 : total2);
            if (temp == total1)
            {
                cout << "DRAGON" << endl;
            }
            else
            {
                cout << "SLOTH" << endl;
            }
        }
        else
        {
            if (d1 > s1)
            {
                cout << "DRAGON" << endl;
            }
            else if (d1 == s1 && d2 > s2)
            {
                cout << "DRAGON" << endl;
            }
            else if (d1 == s1 && d2 == s2 && d3 > s3)
            {
                cout << "DRAGON" << endl;
            }
            else if (d1 == s1 && d2 == s2 && d3 == s3)
            {
                cout << "TIE" << endl;
            }
            else
            {
                cout << "SLOTH" << endl;
            }
        }
    }
        return 0;
    }