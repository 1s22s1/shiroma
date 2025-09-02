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

    ll H, W, answer = 0;
    vector<vector<ll>> operations;
    cin >> H >> W;

    vector<vector<ll>> squares(H, vector<ll>(W));
    rep(i, H)
    {
        rep(j, W)
        {
            ll a;
            cin >> a;

            squares.at(i).at(j) = a;
        }
    }

    rep(i, H)
    {
        rep(j, W - 1)
        {
            if (squares.at(i).at(j) % 2 == 1)
            {
                vector<ll> operation = {i + 1, j + 1, i + 1, j + 2};
                operations.emplace_back(operation);
                squares.at(i)
                    .at(j + 1)++;
                answer++;
            }
        }
    }

    rep(i, H - 1)
    {
        if (squares.at(i).at(W - 1) % 2 == 1)
        {
            vector<ll> operation = {i + 1, W, i + 2, W};
            operations.emplace_back(operation);
            squares.at(i + 1).at(W - 1)++;
            answer++;
        }
    }

    cout << answer << endl;
    for (auto operation : operations)
    {
        cout << operation[0] << ' ' << operation[1] << ' ' << operation[2] << ' ' << operation[3] << endl;
    }

    return 0;
}
