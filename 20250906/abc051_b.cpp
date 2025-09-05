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

    ll K, S;
    cin >> K >> S;

    ll answer = 0;

    for (ll x = 0; x <= K; x++)
    {
        for (ll y = 0; y <= K; y++)
        {
            ll z = S - x - y;

            if (0 <= z && z <= K)
            {
                answer++;
            }
        }
    }

    cout << answer << endl;

    return 0;
}
