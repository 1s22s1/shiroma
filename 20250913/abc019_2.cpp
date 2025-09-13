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

    string s;
    cin >> s;

    ll i = 0;
    while (i < s.size())
    {
        ll j = i;
        while (j < s.size() && s.at(i) == s.at(j))
        {
            j++;
        }

        cout << s.at(i) << j - i;
        i = j;
    }

    cout << endl;

    return 0;
}
