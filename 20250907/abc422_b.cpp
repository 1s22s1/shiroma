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

    ll h, w;
    cin >> h >> w;

    vector<string> maze;

    rep(i, h)
    {
        string s;
        cin >> s;
        maze.emplace_back(s);
    }

    vector<pair<ll, ll>> moves = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    ll answer = 0;
    bool ok = true;
    rep(i, h)
    {
        rep(j, w)
        {
            if (maze.at(i).at(j) == '#')
            {
                ll count = 0;

                for (auto move : moves)
                {
                    ll next_i = move.first + i;
                    ll next_j = move.second + j;

                    if (0 <= next_i && next_i < h && 0 <= next_j && next_j < w && maze.at(next_i).at(next_j) == '#')
                    {
                        count++;
                    }
                }

                if (count != 2 && count != 4)
                {
                    ok = false;
                }
            }
        }
    }

    if (ok)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
