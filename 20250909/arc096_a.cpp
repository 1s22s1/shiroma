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

    ll A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    ll answer = LLONG_MAX;

    for (ll i = 0; i <= max(2 * X, 2 * Y); i += 2)
    {
        ll amount = i * C;
        amount = amount + A * max(0LL, X - i / 2) + B * max(0LL, Y - i / 2);

        answer = min(answer, amount);
    }

    cout << answer << endl;

    return 0;
}
