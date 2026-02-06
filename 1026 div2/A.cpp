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
    sort(vec.begin(),vec.end());
    int ans=-1;
    int a=-1;
    for(int i=0;i<n;i++){
        if(vec[i]&1){
            a=i;
            break;
        }
    }
    int b=-1;
    for(int i=0;i<n;i++){
        if(vec[n-1-i]&1){
            b=i;
            break;
        }
    }
    if(a!=-1){
        ans=(a+b);
    }
    a=-1;
    for(int i=0;i<n;i++){
        if(!(vec[i]&1)){
            a=i;
            break;
        }
    }
     b=-1;
    for(int i=0;i<n;i++){
        if(!(vec[n-1-i]&1)){
            b=i;
            break;
        }
    }
    if(a!=-1){
        if(ans!=-1){
            ans=min(ans,a+b);
        }
        else{
ans=(a+b);
        }
        
    }
    cout<<ans<<"\n";
    

 t--;}

}