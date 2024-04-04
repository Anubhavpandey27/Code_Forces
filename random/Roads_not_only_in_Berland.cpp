#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
void helper(){
}
long long find_set(long long n,vector<long long > &vec){
  if(vec[n]==n){
    return n;
  }
  return vec[n]=find_set(vec[n],vec);
}
void union_sets(long  a, long b,vector<long long >& vec) {
    a = find_set(a,vec);
    b = find_set(b,vec);
    if (a != b)
        vec[b] = a;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
int n=t;

vector<ll>vec;
for(int i=0;i<=t;i++){
vec.emplace_back(i);
}


t-=2;
vector<pair<ll,ll>> v;
ll ans;
ll c,d;
cin>>c>>d;
ans=c;
vec[d]=c;

while(t){
    ll a,b;
    cin>>a>>b;
    if(find_set(b,vec)==ans){
        swap(a,b);
    }
    
    if(find_set(a,vec)==find_set(b,vec)){
        v.push_back({a,b});
    }
    else{
        union_sets(a,b,vec);
    }



 t--;}
 long long k=0;
 if(v.size()==0){
    cout<<0;
 }
 else{
    cout<<v.size()<<"\n";
 for(int i=1;i<=n;i++){
    if(find_set(i,vec)!=ans){
         cout<<v[k].first<<" "<<v[k].second<<" "<<ans<<" "<<i<<"\n";
         k++;
         union_sets(ans,i,vec);
         find_set(i,vec);

         if(k==v.size()){
            break;
         }
    }
       
 }
 }

}