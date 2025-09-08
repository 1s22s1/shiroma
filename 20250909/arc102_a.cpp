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

    ll N, K;
    cin >> N >> K;

    map<ll, ll> count;

    for (ll i = 1; i <= N; i++)
    {
        count[i % K]++;
    }

    ll answer = 0;
    for (auto [key, value] : count)
    {
        ll b = (K - key) % K;
        ll c = (K - key) % K;

        if ((c + b) % K == 0)
        {
            answer += count[key] * count[b] * count[c];
        }
    }

    cout << answer << endl;

    return 0;
}
