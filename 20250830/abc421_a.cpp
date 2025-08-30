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

    vector<string> Sn;
    rep(i, N)
    {
        string s;
        cin >> s;
        Sn.emplace_back(s);
    }

    ll X;
    string Y;
    cin >> X >> Y;

    if (Sn.at(X - 1) == Y)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
