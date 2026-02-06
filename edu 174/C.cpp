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
    vector<ll>vec=input(n);
    ll ans=0;
    ll md=998244353;
    int a=0;int b=0;int c=0;
    for(int i=n-1;i>=0;i--){
        if(vec[i]==1){
            ans+=(b);
            ans%=md;
        }
        if(vec[i]==2){
          
            b=c+2*b;
            b%=md;
        }
        if(vec[i]==3){
            c++;
        }

    }
    cout<<ans<<"\n";
    


 t--;}

}