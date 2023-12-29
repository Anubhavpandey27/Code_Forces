#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <unordered_set>
#define ll long long
void helper(){
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
    ll n;
    cin>> n;
    vector<pair<ll,ll>> vec;
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
       
    }
    sort(vec.begin(),vec.end());   
   
    ll ans = 0;
      for(int i=1;i<n-1;i++){
          for(int k=i+1;k<n;k++){
            if(vec[i].second>vec[k].second ){
                ans++;
            }
          }
      }
      cout<<ans<<"\n";


}

}