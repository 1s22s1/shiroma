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

    vector<ll> answer(S.size() + 1, 0);

    rep(i, S.size())
    {
        if (S.at(i) == '<')
        {
            answer.at(i + 1) = answer.at(i) + 1;
        }
    }

    for (ll i = S.size() - 1; i >= 0; i--)
    {
        if (S.at(i) == '>')
        {
            answer.at(i) = max(answer.at(i), answer.at(i + 1) + 1);
        }
    }

    cout << accumulate(answer.begin(), answer.end(), 0LL) << endl;

    return 0;
}
