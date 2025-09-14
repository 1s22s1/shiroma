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

    ll current_time = 0, current_number = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;

    rep(i, N)
    {
        ll A, B, C;
        cin >> A >> B >> C;

        if (current_number + C <= K)
        {
            current_time = max(current_time, A);
            current_number += C;
            pq.emplace(A + B, C);

            cout << current_time << endl;
        }
        else
        {
            while (current_number + C > K)
            {
                auto [time, c] = pq.top();
                current_time = max(current_time, time);
                current_number -= c;
            }

            current_number += C;
            pq.emplace(A + B, C);

            cout << current_time << endl;
        }
    }

    return 0;
}
