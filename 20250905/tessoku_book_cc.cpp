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

    string s;
    cin >> s;

    ll answer = 0;

    for (auto c : s)
    {
        answer = answer * 2 + (c - '0');
    }

    cout << answer << endl;

    return 0;
}
