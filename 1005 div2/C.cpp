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
    vector<ll> vec=input(n);
    
    vector<ll> pre1(n+1,0);
    // vector<ll> suf1(n,0);
    vector<ll> pre2(n+1,0);
    // vector<ll> suf2(n,0);
    ll tot1=0;
    ll tot2=0;
    for(int i=0;i<n;i++)
    {
        if(vec[i]>0){
            pre1[i+1]+=(vec[i]+pre1[i]);
            pre2[i+1]=pre2[i];  
            tot1+=vec[i];
        }
        else{
            pre2[i+1]+=(abs(vec[i])+pre2[i]);
            pre1[i+1]=pre1[i];  
            tot2+=abs(vec[i]);
        }
    }
    ll ans=0;
    int ct=0;
    int a=n-1;
    int b=0;
    for(int i=0;i<n;i++){
        if(vec[i]>0 && pre1[i+1]>=pre2[i+1]){
            if(pre1[i+1]-pre1[ct]>=pre2[i+1]-pre2[ct]){
                // cout<<i<<"\n";
            ct=max(ct,i+1);
            ans=(pre1[i+1]);
            }
        }   
        // if(vec[i]>0){
        //     ans+=vec[i];
        // }
        // else{
        //     a=i;
        //     break;
        // }

    }

    for(int i=ct;i<n;i++){
        if(vec[i]<0){
            ans+=abs(vec[i]);
        }                                                
        
    }
    // if(a>=b){

    // }
    // else{
    //     // cout<<ans;
    //     ll ps=0;
    //     ll neg=0;
    //     for(int i=a;i<=b;i++){
    //         if(vec[i]<0){
    //             neg+=(abs(vec[i]));
    //         }
    //         else{
    //             ps+=vec[i];
    //         }

    //     }
    //     ans+=(max(neg,ps));
    // }
    // // for(int i=ct+1;i<n;i++){
    // //     if(vec[i]<0){
    // //         ans+=(abs(vec[i]));
    // //     }
    // // }
    // for(int i=0;i<n;i++){
    //     cout<<pre1[i+1]<<" "<<pre2[i+1]<<"\n";
    // }
    cout<<ans<<"\n";


 t--;}

}