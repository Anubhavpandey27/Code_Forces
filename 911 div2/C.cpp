#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>

void helper(){
}
int solve(string &s,int i,vector<int> &dp,vector<pair<int,int>> &vec){
    if(dp[i]!=-1) {
         return dp[i];
         }
            if(vec[i].first==0 && vec[i].second==0){
                dp[i]=0;
                return 0;
            }
            
            int a=1e6;
            int b=1e6;
            if(vec[i].first!=0){
                    a=int(s[i-1]!='L')+solve(s,vec[i].first,dp,vec);
}
            
            
            if(vec[i].second!=0){
                
                b=int(s[i-1]!='R')+solve(s,vec[i].second,dp,vec);
            }
            dp[i]=min(a,b);
            return dp[i];

}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
    
 int n;
 cin>>n;
 string s;
 cin>>s;
 
 vector<pair<int,int>> vec;
 pair<int,int> p={0,0};
 vec.push_back(p);
 for(int i=1;i<=n;i++){
    int l,r;
    cin>>l>>r;
    pair<int,int>p1;
    p1.first=l;
    p1.second=r;
    vec.push_back(p1);
 }
 vector<int> dp(n+1,-1);
 int ans=solve(s,1,dp,vec);

 cout<<ans<<endl;

}

}