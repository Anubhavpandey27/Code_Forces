#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
bool helper(vector<pair<ll,ll>> vec,ll k){
ll p=0;
for(int i=0;i<vec.size();i++){
    ll temp=p+k;

    
    p=min(temp,vec[i].second);
    if(p>vec[i].second || p<vec[i].first){
        return false;
    }

}
return true;

}
ll binarySearch(vector<pair<ll,ll>> vec, int l, int r)
{
    ll ans=1e8;
    while (l <= r) {
        ll m = l + (r - l) / 2;
 
       
        
 
 
        if (helper(vec,m))
            {
             r = m - 1;
            ans=min(m,ans);
            }
 
      
        else{
           l = m + 1;
        }
    }
 
 
    return ans;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
vector<pair<ll,ll>> vec;
ll n;
cin>>n;
int di=0;
for(int i=0;i<n;i++){
    int l,r;
    cin>>l>>r;
    di=max(di,r-l);
    vec.push_back(make_pair(l,r));
}
cout<<binarySearch(vec,0,2*di)<<"\n";



 t--;}

}