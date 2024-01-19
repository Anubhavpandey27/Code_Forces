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

for(int z=0;z<t;z++){
ll n;
cin>>n;
vector<pair<ll,ll>> a,b,c;
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    a.push_back({ele,i});

}
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    b.push_back({ele,i});
    
}
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    c.push_back({ele,i});
    
}
sort(a.begin(),a.end());
sort(b.begin(),b.end());
sort(c.begin(),c.end());
ll ans=0;
if(n<6){
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            ll a2=a[i].second;
            ll b2=b[j].second;
            ll c2=c[k].second;

            if(a2!=b2 && b2!=c2 && a2!=c2){
                ans=max(ans,a[i].first+b[j].first+c[k].first);
            }
            

        }
    }
}

}
else{
vector<pair<ll,ll>> a1,b1,c1;
a1={a[n-1],a[n-2],a[n-3],a[n-4],a[n-5]};
b1={b[n-1],b[n-2],b[n-3],b[n-4],b[n-5]};
c1={c[n-1],c[n-2],c[n-3],c[n-4],c[n-5]};

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
            ll a2=a1[i].second;
            ll b2=b1[j].second;
            ll c2=c1[k].second;

            if(a2!=b2 && b2!=c2 && a2!=c2){
                ans=max(ans,a1[i].first+b1[j].first+c1[k].first);
            }
            

        }
    }
}
}
cout<<ans<<"\n";

}

}