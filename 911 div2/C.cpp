#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define  ll long long 
void helper(){
}
int solve(string s,int i,vector<ll> &dp,vector<pair<ll,ll>> vec){
            if(vec[i].first==0 && vec[i].second==0){
                return 0;
            }
            ll a=1e6;
            ll b=1e6;
            if(vec[i].first!=0){
                if(dp[vec[i].first]==-1){
                    dp[vec[i].first]=solve(s,vec[i].first,dp,vec);
                }
                if(s[i]=='L'){
                    a=dp[vec[i].first];
                }
                else{
                    a=dp[vec[i].first]+1;
                }
            
            }
            if(vec[i].second!=0){
                if(dp[vec[i].second]==-1){
                    dp[vec[i].second]=solve(s,vec[i].first,dp,vec);
                }
                if(s[i]=='R'){
                    a=dp[vec[i].second];
                }
                else{
                    a=dp[vec[i].second]+1;
                }
            
            }
            dp[i]=min(a,b);
            return dp[i];

}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
    
 ll n;
 cin>>n;
 string s;
 cin>>s;
 s='a'+s;
 vector<pair<ll,ll>> vec;
 pair<ll,ll> p;
 vec.push_back(p);
 for(int i=1;i<=n;i++){
    ll l,r;
    cin>>l>>r;
    pair<ll,ll>p1;
    p1.first=l;
    p1.second=r;
    vec.push_back(p1);
 }
 vector<ll> dp(n+1,-1);
 int ans=solve(s,1,dp,vec);
 cout<<ans<<endl;

}

}