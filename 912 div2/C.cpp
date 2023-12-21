#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
void helper(){
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
    ll n;
    cin>>n;
    vector<ll> vec;

        for(int i = 0;i<n;i++) {
            ll element;
            cin >>element;
            vec.emplace_back(element);
        }

        ll sr = 0;
        pair<ll,ll> p={0,1};
        vector<pair<ll,ll>> dp(n + 1, p);
        dp[n] = p;

        for (int i=n-1;i>=0;i--) {
            int total = dp[i + 1].first;
            int count = dp[i + 1].second;
            pair<ll,ll> p1={total + vec[i],count};

            dp[i] = p1;
            pair<ll,ll>p2={total+sr+vec[i],count+1};
            dp[i] = max(dp[i], p2);
            sr+= vec[i];
}

cout<<dp[0].first<<endl;
    }

    

}

