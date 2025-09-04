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

    ll N, Y;
    cin >> N >> Y;

    for (ll x = 0; x <= N; x++)
    {
        for (ll y = 0; y <= N; y++)
        {
            ll z = N - x - y;
            ll rest = Y - 10000 * x - 5000 * y;

            if (z >= 0 && rest == 1000 * z)
            {
                cout << x << ' ' << y << ' ' << z << endl;

                return 0;
            }
        }
    }

    cout << "-1 -1 -1" << endl;

    return 0;
}
