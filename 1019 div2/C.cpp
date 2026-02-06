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
bool check(vector<ll> &vec ,vector<ll> &pre,ll &k,int l,int r){
    int tp=(r-l+2)/2;
    if(pre[r+1]-pre[l]>=tp){
        
        return true;
    }
    return false;

}


int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
    int n;
    ll k;
    bool ans=false;
    cin>>n>>k;
    vector<ll> vec=input(n);
    vector<ll>pre={0};
    for(int i=0;i<n;i++){
        if(vec[i]<=k){
            pre.push_back(pre[i]+1);
            
        }
        else{
            pre.push_back(pre[i]);
        }
    }
    // for(int i=0;i<=n;i++){
    //     cout<<pre[i];
    // }
    if(vec[0]<=k && vec[n-1]<=k){
        ans=true;
    }
    else if(vec[0]<=k && vec[1]<=k){
        ans=true;
    }
    else if(vec[n-1]<=k && vec[n-2]<=k){
        ans=true;
    }
    // for(int i=1;i<n-1;i++){
    //     if(vec[i]<=k){
    //         if(i!=1 && vec[i-1]>k){
    //             if(check(vec,pre,k,0,i-2)){
               
    //             ans=true;
    //         }

    //         }
    //         else{
    //              if(check(vec,pre,k,0,i-1)){
               
    //             ans=true;
    //         }

    //         }
    //         if(i!=n-2 && vec[i+1]>k){
    //              if(check(vec,pre,k,i+2,n-1)){
                 
    //                 ans=true;
    //             }

    //         }
    //         else{
    //              if(check(vec,pre,k,i+1,n-1)){
                 
    //                 ans=true;
    //             }

    //         }
           
           
    //     }
    // }
    // if(vec[n-1]<=k){
    //     int st=1;
    //     if(n>3){
    //         st=2;
    //     }
    //     // for(int i=0;i<n-st-1;i++){
    //     //     if(check(vec,pre,k,0,i)){
                 
    //     //         ans=true;
    //     //     }
    //     // }
    //     for(int i=n-st-1;i>=1;i--){
    //         if(check(vec,pre,k,i,n-1-st)){
    //             ans=true;
    //         }
    //     }
    // }
   
    // if(vec[0]<=k ){
    //     int st=1;
    //     if(n>3){
    //         st=2;
    //     }
    //     for(int i=st;i<n-1;i++){
    //         if(check(vec,pre,k,st,i)){
                 
    //             ans=true;
    //         }
    //     }
    //     // for(int i=n-2;i>=2;i--){
    //     //     if(check(vec,pre,k,i,n-1)){
                
    //     //         ans=true;
    //     //     }
    //     // }
    // }
    int a=-1;
    int b=-1;
    for(int i=0;i<n;i++){
        if(check(vec,pre,k,0,i)){
            a=i;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(check(vec,pre,k,i,n-1)){
            b=i;
        }
    }
    if(b>-1 && a>-1){
        if(b-a>1){
            ans=true;
        }
    }
    if(a>-1){
        if(n-1-a>2){
            if(vec[a+1]>k){
                for(int i=a+2;i<n-1;i++){
                    if(check(vec,pre,k,i,n-2)){
                        ans=true;
                    }
                }
            }
            for(int i=a+1;i<n-1;i++){
                    if(check(vec,pre,k,i,n-2)){
                        ans=true;
                    }
                }
        }
    }
    if(b>-1){
        if(b>2){
            if()
        }
    }

    if(ans){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
    }


 t--;}

}