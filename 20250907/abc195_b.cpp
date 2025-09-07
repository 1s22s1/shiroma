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

    ll A, B, W;
    cin >> A >> B >> W;

    ll min_it = 1000 * 1000, max_it = -1;

    for (ll i = 1; i <= W * 1000; i++)
    {
        double gram = (double)W * 1000 / (double)i;

        if (A <= gram && gram <= B)
        {
            min_it = min(min_it, i);
            max_it = max(max_it, i);
        }
    }

    if (max_it == -1 && min_it == 1000 * 1000)
    {
        cout << "UNSATISFIABLE" << endl;
    }
    else
    {
        cout << min_it << ' ' << max_it << endl;
    }

    return 0;
}
