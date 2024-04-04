#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#define ll long long
void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
ll n,k;
cin>>n>>k;
vector<pair<ll,ll>> vec;
map<int,int> fre;
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    vec.push_back({ele,-1});
}
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    vec[i].second=ele;
    fre[ele]++;
}
sort(vec.begin(),vec.end());
int i=0;
ll ans=1e7;
ll zero=0;

map<int,bool>mp;
while(i<=k){
   int a=vec[i].first;
   int c=vec[i].second;
   if(mp[c]){

   }
   else{
    mp[c]=true;
    ans=min(ans,max(zero,n-fre[c]-i-(k-i)));
   }
   i++;

}
cout<<ans<<"\n";
 t--;}

}