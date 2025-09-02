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

    ll gap = 0;
    rep(i, N - 1)
    {
        if (S.at(i) != S.at(i + 1))
        {
            gap++;
        }
    }

    cout << N - 1 - max(gap - K * 2, 0LL) << endl;

    return 0;
}
