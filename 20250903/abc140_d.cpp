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

    ll N, K;
    string S;

    cin >> N >> K >> S;

    ll diff = 0;
    rep(i, N - 1)
    {
        if (S.at(i) != S.at(i + 1))
        {
            diff += 1;
        }
    }

    ll answer = N - 1 - max(diff - 2 * K, 0LL);

    cout << answer << endl;

    return 0;
}
