#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#define ll long long
#include <math.h>
void helper(){
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> vec;
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        vec.emplace_back(make_pair(ele,i));
    }
    vector<ll> ans(n,0);
    sort(vec.begin(),vec.end());
    vector<ll> presum;
    bool all =false;
    presum.emplace_back(vec[0].first);
    for(int i=1;i<n;i++){
        presum.emplace_back(presum[i-1]+vec[i].first);
    }
    ll sm;
    for(int i=0;i<n;i++){
        if(!all){
         sm=i;
         for(int k=i;k<n-1;k++){
             if( presum[k]>=vec[k+1].first){
                    sm++;
             }
             else{
                break;
             }
         }
        }

         ans[vec[i].second]=sm;
         if(sm==n-1){
        all=true;
         }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    

}

}