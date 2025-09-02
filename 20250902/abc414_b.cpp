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
    cin >> N;

    vector<pair<char, ll>> vec;
    ll length = 0;

    rep(i, N)
    {
        char c;
        ll l;

        cin >> c >> l;
        length += l;

        if (length > 100)
        {
            cout << "Too Long" << endl;

            return 0;
        }

        vec.emplace_back(c, l);
    }

    string answer = "";

    for (auto [key, value] : vec)
    {
        rep(i, value)
        {
            answer += key;
        }
    }

    cout << answer << endl;

    return 0;
}
