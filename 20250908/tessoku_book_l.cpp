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

bool compare(ll second)
{
    ll sum = 0;

    for (auto a : An)
    {
        sum += second / a;
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

    ll left = 0, right = 1000000000 + 1;

    while (left < right)
    {
        ll middle = (left + right) / 2;

        if (compare(middle))
        {
            right = middle;
        }
        else
        {
            left = middle + 1;
        }
    }

    cout << left << endl;

    return 0;
}
