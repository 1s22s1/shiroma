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

    ll N, R;
    cin >> N >> R;

    vector<ll> Ln;
    rep(i, N)
    {
        ll L;
        cin >> L;

        Ln.emplace_back(L);
    }

    ll answer = 0;

    auto it = find(Ln.begin(), Ln.end(), 0);
    if (it != Ln.end())
    {
        ll index = distance(Ln.begin(), it);
        for (ll i = index; i < R; i++)
        {
            if (Ln.at(i) == 0)
            {
                answer++;
            }
            else
            {
                answer += 2;
            }
        }
    }

    auto rit = find(Ln.rbegin(), Ln.rend(), 0);
    if (it != Ln.end())
    {
        ll index = distance(Ln.begin(), rit.base()) - 1;
        for (ll i = index; i >= R; i--)
        {
            if (Ln.at(i) == 0)
            {
                answer++;
            }
            else
            {
                answer += 2;
            }
        }
    }

    cout << answer << endl;

    return 0;
}
