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

    ll answer = -1;

    for (ll i = 1; i <= N - 1; i++)
    {
        string before = S.substr(0, i);
        string after = S.substr(i);

        set<char> s, t, u;

        for (auto c : before)
        {
            s.insert(c);
        }

        for (auto c : after)
        {
            t.insert(c);
        }

        set_intersection(s.begin(), s.end(), t.begin(), t.end(), inserter(u, u.end()));
        answer = max(answer, (ll)u.size());
    }

    cout << answer << endl;

    return 0;
}
