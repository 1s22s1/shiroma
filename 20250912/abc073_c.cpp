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

    map<ll, ll> count;
    rep(i, N)
    {
        ll A;
        cin >> A;

        count[A]++;
    }

    ll answer = 0;
    for (auto [key, value] : count)
    {
        if (value % 2 == 1)
        {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
