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

    vector<vector<ll>> grid;

    rep(i, 3)
    {
        vector<ll> row;

        rep(j, 3)
        {
            ll c;
            cin >> c;
            row.emplace_back(c);
        }

        grid.emplace_back(row);
    }

    bool ok = true;

    if (grid.at(0).at(0) - grid.at(0).at(1) != grid.at(1).at(0) - grid.at(1).at(1))
    {
        ok = false;
    }

    if (grid.at(1).at(0) - grid.at(1).at(1) != grid.at(2).at(0) - grid.at(2).at(1))
    {
        ok = false;
    }

    if (grid.at(0).at(1) - grid.at(0).at(2) != grid.at(1).at(1) - grid.at(1).at(2))
    {
        ok = false;
    }

    if (grid.at(1).at(1) - grid.at(1).at(2) != grid.at(2).at(1) - grid.at(2).at(2))
    {
        ok = false;
    }

    if (grid.at(0).at(0) - grid.at(0).at(2) != grid.at(1).at(0) - grid.at(1).at(2))
    {
        ok = false;
    }

    if (grid.at(1).at(0) - grid.at(1).at(2) != grid.at(2).at(0) - grid.at(2).at(2))
    {
        ok = false;
    }

    if (ok)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
