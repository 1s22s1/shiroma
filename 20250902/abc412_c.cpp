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

void solve(void)
{
    ll N;
    cin >> N;
    vector<ll> An;
    rep(i, N)
    {
        ll a;
        cin >> a;

        An.emplace_back(a);
    }

    ll front = An.front();
    ll back = An.back();

    if (front * 2 >= back)
    {
        cout << 2 << endl;

        return;
    }

    vector<ll> Tn;
    for (auto a : An)
    {
        if (front <= a && a <= back)
        {
            Tn.emplace_back(a);
        }
    }

    sort(Tn.begin(), Tn.end());
    rep(i, Tn.size() - 1)
    {
        if (Tn.at(i) * 2 < Tn.at(i + 1))
        {
            cout << -1 << endl;

            return;
        }
    }

    ll answer = 2, current = 0;
    while (Tn.at(current) * 2 < back)
    {
        current = upper_bound(Tn.begin(), Tn.end(), Tn.at(current) * 2) - Tn.begin() - 1;
        answer++;
    }

    cout << answer << endl;

    return;
}

int main()
{
    init();

    ll T;
    cin >> T;

    rep(i, T)
    {
        solve();
    }

    return 0;
}
