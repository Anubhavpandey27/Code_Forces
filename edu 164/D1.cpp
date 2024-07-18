#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int NN = 5050;
const int MOD = 998244353;

int a[NN], sm[NN] = {1};

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    int ans = 0;
    for (int i = 1, x; i <= n; i++) {
        x = a[i];
        for (int j = 0; j <= x; j++)
            ans = (ans + (long long)sm[j] * x) % MOD;
        for (int j = x + 1; j < NN; j++)
            ans = (ans + (long long)sm[j] * ((j + x + 1) / 2)) % MOD;
        for (int j = NN - 1; j >= 0; j--)
            if (j >= x)
                sm[j] = (sm[j] + sm[j - x]) % MOD;
    }
    cout << ans << endl;
    return 0;
}
