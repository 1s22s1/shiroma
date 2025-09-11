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

    vector<set<ll>> vec;

    rep(i, N)
    {
        ll K;
        cin >> K;

        set<ll> set;
        rep(i, K)
        {
            ll A;
            cin >> A;

            set.insert(A);
        }

        vec.emplace_back(set);
    }

    ll answer = 0;

    for (ll i = 1; i <= M; i++)
    {
        bool ok = true;

        for (auto set : vec)
        {
            if (!set.contains(i))
            {
                ok = false;
            }
        }

        if (ok)
        {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
