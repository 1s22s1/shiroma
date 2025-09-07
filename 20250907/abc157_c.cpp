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
        for (ll i = 0; i < 10; i++)
        {
            string i_string = to_string(i);

            bool ok = true;
            for (auto [s, c] : conditions)
            {
                if (i_string.at(s - 1) != to_string(c).at(0))
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
        for (ll i = 10; i < 99; i++)
        {
            string i_string = to_string(i);

            bool ok = true;
            for (auto [s, c] : conditions)
            {
                if (i_string.at(s - 1) != to_string(c).at(0))
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
    case 3:

        for (ll i = 100; i < 999; i++)
        {
            string i_string = to_string(i);

            bool ok = true;
            for (auto [s, c] : conditions)
            {
                if (i_string.at(s - 1) != to_string(c).at(0))
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

    cout << -1 << endl;

    return 0;
}
