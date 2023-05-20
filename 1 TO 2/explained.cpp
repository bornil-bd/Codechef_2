#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, x, pos;              // a=number of problems, pos=position
        cin >> a;
        for (int i = 1; i <= a; i++)
        {
            cin >> x;               // every time we take the input in x variable
            if (x < 8)
            {
                pos = i;            // here pos will store the position of last number between 1 to 7
            }
        }
        cout << pos << '\n';
    }
    return 0;
}