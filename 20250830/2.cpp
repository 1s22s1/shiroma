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

    vector<ll> An = {0};
    for (auto c : S)
    {
        if (c == 'A')
        {
            An.emplace_back(An.back() + 1);
        }
        else
        {
            An.emplace_back(An.back());
        }
    }

    rep(i, 2 * N + 1)
    {
        if (An.at(i) != (i + 1) / 2)
        {
            cout << "a: " << i << endl;
        }
    }

    return 0;
}
