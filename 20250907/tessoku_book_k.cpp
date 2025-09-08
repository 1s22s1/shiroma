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

    ll N, X;
    cin >> N >> X;

    vector<ll> An;
    rep(i, N)
    {
        ll a;
        cin >> a;
        An.emplace_back(a);
    }

    auto index = lower_bound(An.begin(), An.end(), X);
    ll answer = distance(An.begin(), index) + 1;

    cout << answer << endl;

    return 0;
}
