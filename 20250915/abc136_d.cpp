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

    string S;
    cin >> S;

    vector<vector<ll>> dp(32, vector<ll>(S.size(), 0));

    rep(i, S.size())
    {
        if (S.at(i) == 'R')
        {
            dp.at(0).at(i) = i + 1;
        }
        else
        {
            dp.at(0).at(i) = i - 1;
        }
    }

    for (ll i = 1; i <= 31; i++)
    {
        rep(j, S.size())
        {
            dp.at(i).at(j) = dp.at(i - 1).at(dp.at(i - 1).at(j));
        }
    }

    vector<ll> answer(S.size(), 0);
    for (auto a : dp.at(31))
    {
        answer.at(a)++;
    }

    for (auto a : answer)
    {
        cout << a << ' ';
    }

    cout << endl;

    return 0;
}
