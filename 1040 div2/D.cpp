#include <iostream>
using namespace std;
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
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
    vector<ll> vec;
    ordered_set os;
    for(int i=0;i<n;i++){
       
        ll ele;
        cin>>ele;
         os.insert(ele);
        vec.emplace_back(ele);
    }
    vector<vector<ll>>dp(n,vector<ll>(2,0));
    dp[n-1][0]=0;
    dp[n-1][1]=0;
    int ans=0;
    for(int i=n-1;i>=0;i--){
        int km=0;
        int zyada=0;
        for(int j=i+1;j<n;j++){
            
            if(vec[i]<vec[j]){
                km++;
                
            }

        }
        for(int j=i-1;j>=0;j--){
            
            if(vec[i]>vec[j]){
                zyada++;
               
            }
        }
        if(zyada>km){
            vec[i]=(2*n-vec[i]);
            
            ans=ans+km;
            cout<<ans;
            
        }
        else{
            ans+=zyada;  
        }
        

        // int km=0;
        // int zyada=0;
        // for(int j=i+1;j<n;j++){
        //     if(vec[i]>vec[j]){
        //         km++;
        //     }
        //     else{
        //         zyada++;
        //     }
        // }
        // ll ad=min(dp[i+1][0],dp[i+1][1]);
        // dp[i][0]=zyada+ad;
        // dp[i][1]=km+ad;

    }
    // cout<<min(dp[0][0],dp[0][1])<<"\n";
    cout<<ans<<"\n";


 t--;}

}