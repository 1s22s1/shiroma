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

    ll H, W;
    cin >> H >> W;

    vector<vector<ll>> table(H, vector<ll>(W));
    rep(i, H)
    {
        rep(j, W)
        {
            ll a;
            cin >> a;

            table.at(i).at(j) = a;
        }
    }

    vector<vector<ll>> operations;
    rep(i, H)
    {
        rep(j, W - 1)
        {
            if (table.at(i).at(j) % 2 == 1)
            {
                vector<ll> operation = {i + 1, j + 1, i + 1, j + 2};
                operations.emplace_back(operation);
                table.at(i).at(j + 1) += 1;
            }
        }
    }

    rep(i, H - 1)
    {
        if (table.at(i).at(W - 1) % 2 == 1)
        {
            vector<ll> operation = {i + 1, W, i + 2, W};
            operations.emplace_back(operation);
            table.at(i + 1).at(W - 1)++;
        }
    }

    cout << operations.size() << endl;
    for (auto operation : operations)
    {
        cout << operation.at(0) << ' ' << operation.at(1) << ' ' << operation.at(2) << ' ' << operation.at(3) << endl;
    }

    return 0;
}
