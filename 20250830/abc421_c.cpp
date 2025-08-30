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
    string S;

    cin >> N >> S;

    ll ab_diff = 0;
    ll ba_diff = 0;

    for (ll i = 0; i < N; i++)
    {
        if (S.at(i) != 'A')
        {
            ab_diff++;
        }
        else
        {
            ba_diff++;
        }
    }
    for (ll i = N; i < 2 * N; i++)
    {
        if (S.at(i) != 'B')
        {
            ab_diff++;
        }
        else
        {
            ba_diff++;
        }
    }

    ll sum = N * (N - 1) / 2;
    cout << sum - min(ab_diff, ba_diff) / 2 << endl;

    return 0;
}
