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

    ll N, A, B, C;
    cin >> N >> A >> B >> C;

    ll answer = 10000;

    rep(i, 10000)
    {
        rep(j, 10000)
        {
            ll rest = N - i * A - j * B;

            if (rest >= 0 && rest % C == 0)
            {
                answer = min(answer, i + j + rest / C);
            }
        }
    }

    cout << answer << endl;

    return 0;
}
