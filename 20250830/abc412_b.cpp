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

    string S, T;
    cin >> S >> T;

    bool ok = true;

    for (ll i = 1; i < S.size(); i++)
    {
        if ('A' <= S.at(i) && S.at(i) <= 'Z')
        {
            if (find(T.begin(), T.end(), S.at(i - 1)) == T.end())
            {
                ok = false;
            }
        }
    }

    if (ok)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
