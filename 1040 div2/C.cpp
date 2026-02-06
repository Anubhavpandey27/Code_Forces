#include <iostream>
using namespace std;
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
//#include <ext/pb_ds/assoc_container.hpp> #include <ext/pb_ds/tree_policy.hpp> using namespace __gnu_pbds; #define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
void helper(){
}
vector<ll>input(int n){
  
    vector<ll>vec;
    for(int i=0;i<n;i++){
      ll ele;
      cin>>ele;
      vec.emplace_back(ele);
    }
    return vec;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
    int n;
    cin>>n;
    set<pair<pair<ll,ll>,ll>> st;
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        st.insert({{a,b},i+1});
    }
    auto pt=st.begin();
    int cur=0;
    int allowed=1;
    vector<ll> ans={0};
    int mx=0;
    while(pt!=st.end()){
        auto val=*pt;
        ll a=val.first.first;
        ll b=val.first.second;
        ll ind=val.second;
        if(a<=mx){
            if(b>mx){
                if(a==cur){
                    ans.pop_back();
    
                }
                ans.emplace_back(ind);
                mx=b;
                pt++;
                cur=a;
            }
            else{
                pt++;
            }
            
        }
        else{
            ans.emplace_back(ind);
                mx=b;
                pt++;
                cur=a;
        }
        
    }
    cout<<ans.size()-1<<"\n";
        for(int i=1;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";

 t--;}

}