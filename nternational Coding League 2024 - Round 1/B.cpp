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
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
ll n,m;
cin>>n>>m;
vector<pair<ll,ll>> vec;
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    vec.push_back({ele,-1});
}
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    vec[i].second=ele;;
}
vector<ll> v;
for(int i=0;i<m;i++){
ll ele;
cin>>ele;
v.emplace_back(ele);


}
sort(v.begin(),v.end());

ll ans=m;
int i=0;
int j=0;
while(i<m){
    ll s=vec[j].first;
    ll e=vec[j].second;
    ll z=v[i];
    if(j<n){
        if(z<=e && z>=s){
            ans--;
            i++;
        }
        else if (z>e){
            j++;
        }
        else{
            
            i++;
        }
    }

else {
    break;
}

}
cout<<ans<<"\n";
 t--;}

}