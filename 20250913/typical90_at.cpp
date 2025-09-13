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

    map<ll, ll> count_a, count_b, count_c;

    rep(i, N)
    {
        ll A;
        cin >> A;

        count_a[A % 46]++;
    }

    rep(i, N)
    {
        ll B;
        cin >> B;

        count_b[B % 46]++;
    }

    rep(i, N)
    {
        ll C;
        cin >> C;

        count_c[C % 46]++;
    }

    ll answer = 0;
    for (auto [k1, v1] : count_a)
    {
        for (auto [k2, v2] : count_b)
        {
            for (auto [k3, v3] : count_c)
            {
                if ((k1 + k2 + k3) % 46 == 0)
                {
                    answer += v1 * v2 * v3;
                }
            }
        }
    }

    cout << answer << endl;

    return 0;
}
