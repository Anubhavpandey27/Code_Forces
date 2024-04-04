#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
ll helper(vector<ll>vec,int i,ll n,ll seat,ll ls,ll mn,vector<vector<vector<ll>>> &dp){

    

    
    if(ls>0){
    ll a=helper(vec,i,n-1,seat,seat-1,mn,dp);
    dp[i][n-1][ls]=a;
    ll b= helper(vec,i,n,seat,ls-1,mn,dp);
    dp[i][n-1][ls]=a;
    min(a,b);


    }
    if(ls==0){
      
    helper(vec,i,n-1,seat,seat-1,mn,dp);
    }
    
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);

ll n,k,s;
vector<ll> vec;
cin>>n>>k>>s;
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    vec.emplace_back(ele);
}
vector<vector<ll>> dp(n,vector<ll>(k,-1));





}