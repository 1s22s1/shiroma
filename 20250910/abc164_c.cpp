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

    set<string> count;

    rep(i, N)
    {
        string S;
        cin >> S;

        count.insert(S);
    }

    cout << count.size() << endl;

    return 0;
}
