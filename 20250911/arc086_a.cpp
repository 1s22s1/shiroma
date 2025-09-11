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

    ll N, K;
    cin >> N >> K;

    map<ll, ll> count;

    rep(i, N)
    {
        ll A;
        cin >> A;

        count[A]++;
    }

    vector<pair<ll, ll>> vec(count.begin(), count.end());
    sort(vec.begin(), vec.end(),
         [](const pair<ll, ll> &a, const pair<ll, ll> &b)
         {
             return a.second < b.second;
         });

    ll answer = 0;

    rep(i, vec.size() - K)
    {
        answer += vec.at(i).second;
    }

    cout << answer << endl;

    return 0;
}
