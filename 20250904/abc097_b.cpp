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

    ll X;
    cin >> X;

    ll answer = -1;

    for (ll b = 1; b <= 40; b++)
    {
        for (ll p = 2; p <= 10; p++)
        {
            ll num = (ll)pow(b, p);

            if (num <= X)
            {
                answer = max(answer, num);
            }
        }
    }

    cout << answer << endl;

    return 0;
}
