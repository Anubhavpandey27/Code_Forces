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
    bool ch=false;
    vector<ll> vec=input(n);
    vector<pair<ll,ll>>q;
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        q.push_back({a,b});
    }
    int ct=0;
    for(int i=0;i<n;i++){
        if(vec[i]==1){
            ct++;
        }
        q[i].first-=ct;
        q[i].second-=ct;
        // if(q[i].second<0){
        //     ch=true;
        // }
        
    }
    vector<ll> mn(n,0);
    mn[n-1]=q[n-1].second;
    for(int i=n-2;i>=0;i--){
        mn[i]=min(q[i].second,mn[i+1]);
    }
    int pt=0;
    for(int i=0;i<n;i++){
        if(vec[i]==-1){
            if(pt<mn[i]){
                vec[i]=1;
                pt++;
            }
            else{
                vec[i]=0;
            }
            

        }
        if(pt<q[i].first){
                ch=true;

            }
            if(pt>mn[i]){
                ch=true;

            }
    }
    if(ch){
        cout<<-1<<"\n";
    }
    else{

    
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    cout<<"\n";
    }


 t--;}

}