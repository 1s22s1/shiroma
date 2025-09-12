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

    vector<map<char, ll>> count_vec;

    rep(i, N)
    {
        string S;
        cin >> S;

        map<char, ll> count;
        for (auto c : S)
        {
            count[c]++;
        }

        count_vec.emplace_back(count);
    }

    string answer = "";

    for (char c = 'a'; c <= 'z'; c++)
    {
        ll length = 100;
        for (auto count : count_vec)
        {
            length = min(length, count[c]);
        }

        answer += string(length, c);
    }

    cout << answer << endl;

    return 0;
}
