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

    ll N, M;
    cin >> N >> M;

    vector<pair<ll, ll>> conditions;
    rep(i, M)
    {
        ll s, c;
        cin >> s >> c;

        conditions.emplace_back(s, c);
    }

    switch (N)
    {
    case 1:
    {
        rep(i, 10)
        {
            bool ok = true;
            string string_i = to_string(i);

            for (auto [s, c] : conditions)
            {
                if (string_i.at(s - 1) != to_string(c).at(0))
                {
                    ok = false;
                }
            }

            if (ok)
            {
                cout << i << endl;

                return 0;
            }
        }

        break;
    }
    case 2:
    {
        for (ll i = 10; i <= 99; i++)
        {
            bool ok = true;
            string string_i = to_string(i);

            for (auto [s, c] : conditions)
            {
                if (string_i.at(s - 1) != to_string(c).at(0))
                {
                    ok = false;
                }
            }

            if (ok)
            {
                cout << i << endl;

                return 0;
            }
        }

        break;
    }
    case 3:
    {
        for (ll i = 100; i <= 999; i++)
        {
            bool ok = true;
            string string_i = to_string(i);

            for (auto [s, c] : conditions)
            {
                if (string_i.at(s - 1) != to_string(c).at(0))
                {
                    ok = false;
                }
            }

            if (ok)
            {
                cout << i << endl;

                return 0;
            }
        }

        break;
    }
    }

    cout << -1 << endl;

    return 0;
}
