#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define v '\n'
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define FOR2(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FOR3(a, b, c) for (int(a) = (b); (a) > (c); (a)--)
#define FOR4(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
int main()
{

    int a, b;
    cin >> a >> b;
    if (a * b >(2* (a + b)))
    {
        cout << "Area" << v;
        cout << a * b << v;
    }
    else if (a * b < (2* (a + b)))
    {
        cout << "Peri" << v;
        cout << (2*(a + b)) << v;
    }
    else
    {
        cout << "Eq" << v;
        cout << a * b << v;
    }

    return 0;
}