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

    map<string, ll> count;
    rep(i, N)
    {
        string S;
        cin >> S;

        count[S]++;
    }

    auto max_it = max_element(
        count.begin(), count.end(),
        [](const auto &a, const auto &b)
        {
            return a.second < b.second;
        });

    vector<string> names;
    for (auto [k, v] : count)
    {
        if (v == max_it->second)
        {
            names.emplace_back(k);
        }
    }

    sort(names.begin(), names.end());

    for (auto name : names)
    {
        cout << name << endl;
    }

    return 0;
}
