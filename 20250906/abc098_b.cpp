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
    string S;

    cin >> N >> S;

    ll answer = -1;

    rep(i, N - 1)
    {
        string a = S.substr(0, i + 1);
        set<char> s;
        for (char c : a)
        {
            s.insert(c);
        }

        string b = S.substr(i + 1);
        set<char> t;
        for (char c : b)
        {
            t.insert(c);
        }

        set<char> u;
        set_intersection(s.begin(), s.end(), t.begin(), t.end(), inserter(u, u.end()));

        answer = max(answer, (ll)u.size());
    }

    cout << answer << endl;

    return 0;
}
