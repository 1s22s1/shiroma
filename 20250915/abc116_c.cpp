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

    vector<ll> Hn;
    rep(i, N)
    {
        ll h;
        cin >> h;

        Hn.emplace_back(h);
    }

    ll max_h = *max_element(Hn.begin(), Hn.end());

    ll answer = 0;
    for (ll h = 1; h <= max_h; h++)
    {
        ll i = 0;
        while (i < N)
        {
            ll j = i;

            if (Hn.at(i) >= h)
            {
                while (j < N && Hn.at(j) >= h)
                {
                    j++;
                }

                answer++;
            }
            else
            {
                while (j < N && Hn.at(j) < h)
                {
                    j++;
                }
            }

            i = j;
        }
    }

    cout << answer << endl;

    return 0;
}
