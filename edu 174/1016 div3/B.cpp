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
    string s;
    cin>>s;
    int z=0;int n=s.size();
    int st=0;
    int ans=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]!='0'){
          st=i;
          break;
        }

    }
    ans+=(n-1-st);

    for(int i=st-1;i>=0;i--){
        if(s[i]!='0'){
            ans++;
        }
    }
    cout<<ans<<"\n";

 t--;}

}