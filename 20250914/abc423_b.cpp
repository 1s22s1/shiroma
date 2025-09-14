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

    ll N;
    cin >> N;

    vector<bool> room_vec(N + 1, false);

    vector<ll> Ln;
    rep(i, N)
    {
        ll L;
        cin >> L;
        Ln.emplace_back(L);
    }

    room_vec.at(0) = true;
    rep(i, N)
    {
        if (Ln.at(i) == 0)
        {
            room_vec.at(i + 1) = true;
        }
        else
        {
            break;
        }
    }

    room_vec.back() = true;
    for (ll i = N - 1; i >= 0; i--)
    {
        if (Ln.at(i) == 0)
        {
            room_vec.at(i) = true;
        }
        else
        {
            break;
        }
    }

    ll answer = count_if(room_vec.begin(), room_vec.end(), [](int x)
                         { return x == false; });

    cout << answer << endl;

    return 0;
}
