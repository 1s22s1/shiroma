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

    string S;
    cin >> S;

    vector<ll> Bn = {0};
    for (auto c : S)
    {
        if (c == 'B')
        {
            Bn.emplace_back(Bn.back() + 1);
        }
        else
        {
            Bn.emplace_back(Bn.back());
        }
    }

    ll answer = 0;
    rep(i, S.size())
    {
        if (S.at(i) == 'W')
        {
            answer += Bn.at(i + 1);
        }
    }

    cout << answer << endl;

    return 0;
}
