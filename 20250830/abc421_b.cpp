#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    ll X, Y;
    cin >> X >> Y;

    rep(i, 8)
    {
        string s = to_string(X + Y);
        reverse(s.begin(), s.end());
        auto Z = stoll(s, nullptr, 10);

        X = Y;
        Y = Z;
    }

    cout << Y << endl;

    return 0;
}
