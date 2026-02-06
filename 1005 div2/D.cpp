#include <iostream>
using namespace std;
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <math.h>
#define int long long
#define ll long long
//#include <ext/pb_ds/assoc_container.hpp> #include <ext/pb_ds/tree_policy.hpp> using namespace __gnu_pbds; #define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
int bs(vector<int>&vec,int k){
    int st=0;
    int n=vec.size();
    int ed=n-1;
    int ans=1e8;
    if(ed==-1){
        return 1e8;
    }
    
    while(st<=ed){
        int md=(st+ed)/2;
        if(vec[md]<=k){
            st=md+1;
            
        }
        else{
            ans=min(ans,vec[md]);
            ed=md-1;
            
        }

    }
    return ans;
}
int helper(int &e,int k1,vector<vector<int>>&v1,vector<int>&pre,vector<int>&vec){
     
    if(k1==vec.size()){
        return k1;
    }
    int el=(e^pre[k1]);
    int a=el;
    if(a==0){
        return k1;
    }
        int tp=0;
        while(a>0){
            a/=2;
            tp++;
        }
        
        
         
        int k=k1;
        int mn=1e8;
       
        for(int i=tp+1;i<31;i++){
           mn=min(mn, bs(v1[i],k));
          
        }
        
        
        int m1=1e8-1;
        m1=bs(v1[tp],k);
        if(mn<m1 ){
            return mn-1;
        }
        if(m1==1e8){
            return vec.size();
        }
        a=(e^pre[m1-1]);
        if(a>=vec[m1-1]){
            return helper(e,m1,v1,pre,vec);
        }
        return m1-1;

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

int32_t main(){
// ios::sync_with_stdio(0);
// cin.tie(NULL);
int t;
cin>>t;
while(t){
    int n,q;
    cin>>n>>q;
     
    // int mx=n-1;
    
    vector<ll> vec=input(n);
    // cout<<t<<"\n";
    reverse(vec.begin(),vec.end());
    vector<ll> pre(n+1,0);
    for(int i=0;i<n;i++){
        pre[i+1]=(pre[i]^vec[i]);
    }
    
    
    
   
    vector<vector<int>> v1(32);
    vector<int> v2(n+1);
    for(int i=1;i<=n;i++){
        int a=vec[i-1];
        int tp=0;
        while(a>0){
            a/=2;
            tp++;
        }
        //cout<<tp<<"-"<<vec[i-1]<<"\n";
        v1[tp].emplace_back(i);
    }
    
    
   
    
    for(int z=0;z<q;z++){
        //  cout<<q;
        int ele;
        cin>>ele;
        // cout<<ele;
      
       
         cout<<helper(ele,0,v1,pre,vec)<<" ";



    }
    
    cout<<"\n";
   
 t--;}

}