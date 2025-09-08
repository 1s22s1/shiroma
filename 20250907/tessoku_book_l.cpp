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

ll N, K;
vector<ll> An;

bool compare(ll x)
{
    ll sum = 0;
    for (auto a : An)
    {
        sum += x / a;
    }

    if (sum >= K)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    init();

    cin >> N >> K;
    rep(i, N)
    {
        ll a;
        cin >> a;
        An.emplace_back(a);
    }

    ll left = 1, right = 1000000000;

    while (left < right)
    {
        ll mid = (left + right) / 2;
        if (compare(mid))
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << left << endl;

    return 0;
}
