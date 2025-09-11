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

    set<string> set;

    rep(i, N)
    {
        string name;
        cin >> name;

        if (set.contains(name))
        {
            // Do nothing
        }
        else
        {
            cout << i + 1 << endl;
            set.insert(name);
        }
    }

    return 0;
}
