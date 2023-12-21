#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
ll solve(vector<pair<ll,ll>>a1,vector<pair<ll,ll>>b1,vector<pair<ll,ll>>c1){
    ll ans=0;
pair<ll,ll>p={-1,-1};
ans+=a1[0].first;
    p.first=a1[0].second;
    if(b1[3].first>c1[3].first){
    if(b1[0].first==p.first){
        ans+=b1[1].first;
        p.second=b1[1].second;

    }
    else{
         ans+=b1[0].first;
        p.second=b1[0].second;

    }
    for(int i=0;i<3;i++){
        if(c1[i].second!=p.first && c1[i].second!=p.second){
            ans+=c1[i].first;
        }
    }
    }
    else{
        if(c1[0].first==p.first){
        ans+=c1[1].first;
        p.second=c1[1].second;

    }
    else{
         ans+=c1[0].first;
        p.second=c1[0].second;

    }
    for(int i=0;i<3;i++){
        if(b1[i].second!=p.first && b1[i].second!=p.second){
            ans+=b1[i].first;
        }
    }
    }
    return ans;

}
vector<pair<ll,ll>> helper(vector<ll> vec,ll n){
    vector<pair<ll,ll>>ans;
    ans.push_back(make_pair(0,0));
    ans.push_back(make_pair(0,0));
    ans.push_back(make_pair(0,0));
for(int i=0;i<n;i++){
     ll temp=vec[i];
     if(vec[i]>ans[2].first){
        if(temp>ans[1].first){
            if(temp>ans[0].first){
                ans[2]=ans[1];
                ans[1]=ans[0];
                ans[1]=make_pair(temp,i);

            }
            else{
                ans[2]=ans[1];
                ans[1]=make_pair(temp,i);
            }
        }
        else{
            ans[2].first=temp;
            ans[2].second=i;

        }
     }
}
ans.push_back(make_pair(ans[0].first-ans[2].first,0));
return ans;
}

int main(){
int t;
cin>>t;
for(int m=0;m<t;m++){
    ll n;
    cin>>n;
    vector<ll> a,b,c;
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        a.emplace_back(ele);
    }
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        b.emplace_back(ele);
    }
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        c.emplace_back(ele);
    }

vector<pair<ll,ll>> a1=helper(a,n);
vector<pair<ll,ll>> b1=helper(b,n);
vector<pair<ll,ll>> c1=helper(c,n);
ll ans=0;
pair<ll,ll>p={-1,-1};

for(int i=0;i<3;i++){
    p.first=a1[i].second;
    for(int j=0;j<3;j++){
        if(b1[j].second!=p.first){
            p.second=b1[j].second;

        for(int k=0;k<3;k++){
            if(c1[k].second!=p.first && c1[k].second!=p.second){
                ans=max(ans,a1[i].first+b1[j].first+c1[k].first);
            }

        }
        }
    }
}
cout<<ans<<"\n";
}


}