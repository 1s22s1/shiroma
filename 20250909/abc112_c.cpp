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

    ll N;
    cin >> N;

    vector<vector<ll>> conditions;
    rep(i, N)
    {
        ll x, y, h;
        cin >> x >> y >> h;

        vector<ll> condition = {x, y, h};
        conditions.emplace_back(condition);
    }

    for (ll x = 0; x <= 101; x++)
    {
        for (ll y = 0; y <= 101; y++)
        {
            bool ok = true;

            for (auto condition : conditions)
            {
                ll center_h = abs(x - condition[0]) + abs(y - condition[1]) + condition[2];
                if (abs(x - condition[0]) + abs(y - condition[1]) == condition[2])
                {
                    ok = false;
                }
            }

            if (ok)
            {
                cout << x << ' ' << y << ' ' << -1 << endl;

                return 0;
            }
        }
    }

    return 0;
}
