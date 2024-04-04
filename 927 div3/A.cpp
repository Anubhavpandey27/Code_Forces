#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
int helper(vector<int>&dp,int i,string s){
    if(i>=dp.size()){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    if(s[i]=='*'){
        return 0;
    }
    dp[i]=max(helper(dp,i+1,s),helper(dp,i+2,s));
    if(s[i]=='@'){
        dp[i]++;
    }
    return dp[i];

    
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
int n;
cin>>n;
string s;
cin>>s;
vector<int> dp(n,-1);
int ans=helper(dp,0,s);
cout<<ans<<"\n";
 t--;}

}