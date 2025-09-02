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

    ll N;
    cin >> N;

    set<ll> set;
    rep(i, N)
    {
        ll a;
        cin >> a;

        set.insert(a);
    }

    if (set.size() % 2 == 0)
    {
        cout << set.size() - 1 << endl;
    }
    else
    {
        cout << set.size() << endl;
    }

    return 0;
}
