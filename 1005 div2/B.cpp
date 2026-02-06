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
    vector<ll> vec;
    map<ll,int>mp;
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        vec.emplace_back(ele);
        mp[ele]++;
    }
    int ans=0;
    int st=-1;
    for(int i=0;i<n;i++){
        if(mp[vec[i]]==1){
            if(i==0){
                vec[i]=1;
            }
            else{
                vec[i]=vec[i-1]+1;
            }
            if(vec[i]>ans){
                ans=vec[i];
                st=i+1;
            }
        }
        else{
            vec[i]=0;
        }
    }
   
     if(st==-1){
        cout<<0<<"\n";
    }
    else{
        cout<<st-(ans-1)<<" "<<st<<"\n";
    }

 t--;}

}