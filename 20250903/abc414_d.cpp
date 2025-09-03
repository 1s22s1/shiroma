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

    vector<ll> diff_vec;
    rep(i, N - 1)
    {
        diff_vec.emplace_back(Xn.at(i + 1) - Xn.at(i));
    }

    sort(diff_vec.begin(), diff_vec.end());

    ll sum = 0;
    rep(i, N - M)
    {
        sum += diff_vec.at(i);
    }

    cout << sum << endl;

    return 0;
}
