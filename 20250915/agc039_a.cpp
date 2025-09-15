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

vector<pair<char, ll>> rle(string s)
{
    vector<pair<char, ll>> vec;

    ll n = s.size();
    ll i = 0;
    while (i < n)
    {
        ll j = i;
        while (j < n && s.at(i) == s.at(j))
        {
            j++;
        }

        vec.emplace_back(s.at(i), j - i);
        i = j;
    }

    return vec;
}

int main()
{
    init();

    string S;
    ll K;

    cin >> S >> K;

    auto compressed_s = rle(S);

    if (compressed_s.size() == 1)
    {
        cout << compressed_s.front().second * K / 2 << endl;

        return 0;
    }

    if (compressed_s.front().first == compressed_s.back().first)
    {
        ll sum = 0;
        for (ll i = 1; i < compressed_s.size() - 1; i++)
        {
            sum += compressed_s.at(i).second / 2;
        }

        ll left = compressed_s.front().second;
        ll right = compressed_s.back().second;

        cout << sum * K + left / 2 + right / 2 + (left + right) / 2 * (K - 1) << endl;
    }
    else
    {
        ll sum = 0;
        for (auto [key, value] : compressed_s)
        {
            sum += value / 2;
        }

        cout << sum * K << endl;
    }

    return 0;
}
