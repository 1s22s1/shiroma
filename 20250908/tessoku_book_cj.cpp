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

ll N;
vector<ll> An;

void solve(void)
{
    ll X;
    cin >> X;

    auto iter = lower_bound(An.begin(), An.end(), X);
    cout << iter - An.begin() << endl;
}

int main()
{
    init();

    ll Q;
    cin >> N;
    rep(i, N)
    {
        ll a;
        cin >> a;
        An.emplace_back(a);
    }

    sort(An.begin(), An.end());

    cin >> Q;

    rep(i, Q)
    {
        solve();
    }

    return 0;
}
