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

    ll N, P, Q;
    cin >> N >> P >> Q;

    vector<ll> An;
    ll answer = 0;

    rep(i, N)
    {
        ll a;
        cin >> a;
        An.emplace_back(a);
    }

    for (ll a = 0; a < N; a++)
    {
        for (ll b = a + 1; b < N; b++)
        {
            for (ll c = b + 1; c < N; c++)
            {
                for (ll d = c + 1; d < N; d++)
                {
                    for (ll e = d + 1; e < N; e++)
                    {
                        ll n = An.at(a) * An.at(b);
                        n %= P;
                        n = (n * An.at(c)) % P;
                        n = (n * An.at(d)) % P;
                        n = (n * An.at(e)) % P;

                        if (n == Q)
                        {
                            answer++;
                        }
                    }
                }
            }
        }
    }

    cout << answer << endl;

    return 0;
}
