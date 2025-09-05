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

    ll N, M;
    cin >> N >> M;

    vector<ll> Xn;
    rep(i, N)
    {
        ll x;
        cin >> x;
        Xn.emplace_back(x);
    }

    sort(Xn.begin(), Xn.end());

    vector<ll> Dn;
    rep(i, N - 1)
    {
        Dn.emplace_back(Xn.at(i + 1) - Xn.at(i));
    }

    sort(Dn.begin(), Dn.end());

    ll answer = 0;
    rep(i, N - M)
    {
        answer += Dn.at(i);
    }

    cout << answer << endl;

    return 0;
}
