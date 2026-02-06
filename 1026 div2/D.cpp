#include <iostream>
using namespace std;
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long





bool canReach(int n,
              const vector<ll>& v1,
              const vector<vector<pair<int,ll>>>& adj,
              ll W)
{
    // dp[i] = max v1 we can v2 on arrival at i (before picking up at i)
    vector<ll> dp(n+1, -1);
    dp[1] = 0;
    
    // Walk through nodes in increasing order (DAG)
    for (int i = 1; i <= n; i++) {
        if (dp[i] < 0) continue;        // i is unreachable
        ll v2 = dp[i] + v1[i];
        for (auto &edge : adj[i]) {
            int to = edge.first;
            ll req = edge.second;
            if (req <= W && v2 >= req) {
                // We can cross this edge under our current “bottleneck” W
                // We carry forward all our v1 (we never drop any)
                dp[to] = max(dp[to], v2);
            }
        }
    }
    return dp[n] >= 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        
        vector<ll> v1(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> v1[i];
        }

        // Build adjacency list, and collect all edge‐weights
        vector<vector<pair<int,ll>>> adj(n+1);
        vector<ll> weights;
        for (int i = 0; i < m; i++) {
            int s, t;
            ll w;
            cin >> s >> t >> w;
            adj[s].push_back({t, w});
            weights.push_back(w);
        }

        // If there are no edges and n>1, we cannot move at all
        if (m == 0 && n > 1) {
            cout << -1 << "\n";
            continue;
        }

        // Sort & dedupe the edge‐weights for binary search
        sort(weights.begin(), weights.end());
        weights.erase(unique(weights.begin(), weights.end()), weights.end());

        // If even using the largest requirement doesn’t let us reach n, answer is -1
        if (!canReach(n, v1, adj, weights.back())) {
            cout << -1 << "\n";
            continue;
        }

        // Binary‐search the smallest W in `weights` that allows a path
        int low = 0, high = (int)weights.size() - 1;
        while (low < high) {
            int mid = (low + high) / 2;
            if (canReach(n, v1, adj, weights[mid]))
                high = mid;
            else
                low = mid + 1;
        }

        cout << weights[low] << "\n";
    }

    return 0;
}

