#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

void init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
}

int main()
{
    init();

    string s;
    cin >> s;

    ll a = s.at(0) - '0';
    ll b = s.at(1) - '0';
    ll c = s.at(2) - '0';
    ll d = s.at(3) - '0';

    if (a + b + c + d == 7)
    {
        cout << a << '+' << b << '+' << c << '+' << d << "=7" << endl;

        return 0;
    }

    if (a + b + c - d == 7)
    {
        cout << a << '+' << b << '+' << c << '-' << d << "=7" << endl;

        return 0;
    }

    if (a + b - c + d == 7)
    {
        cout << a << '+' << b << '-' << c << '+' << d << "=7" << endl;

        return 0;
    }

    if (a + b - c - d == 7)
    {
        cout << a << '+' << b << '-' << c << '-' << d << "=7" << endl;

        return 0;
    }

    if (a - b + c + d == 7)
    {
        cout << a << '-' << b << '+' << c << '+' << d << "=7" << endl;

        return 0;
    }

    if (a - b + c - d == 7)
    {
        cout << a << '-' << b << '+' << c << '-' << d << "=7" << endl;

        return 0;
    }

    if (a - b - c + d == 7)
    {
        cout << a << '-' << b << '-' << c << '+' << d << "=7" << endl;

        return 0;
    }

    if (a - b - c - d == 7)
    {
        cout << a << '-' << b << '-' << c << '-' << d << "=7" << endl;

        return 0;
    }

    return 0;
}
