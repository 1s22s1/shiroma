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

    vector<ll> Hn;
    rep(i, N)
    {
        ll H;
        cin >> H;
        Hn.emplace_back(H);
    }

    ll answer = 0;

    ll i = 0;
    while (i < N - 1)
    {
        ll j = i;
        while (j < N - 1 && Hn.at(j) >= Hn.at(j + 1))
        {
            j++;
        }

        answer = max(answer, j - i);
        i = j + 1;
    }

    cout << answer << endl;

    return 0;
}
