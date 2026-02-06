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
int n,m;
cin>>n>>m;
vector<vector<int>> vec(n,vector<int>(m,0));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        int ele;
        cin>>ele;
        vec[i][j]=ele;
    }
}
set<int> st1,st2;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        st1.insert(vec[i][j]);
       if(j!=0){
        if(vec[i][j]==vec[i][j-1]){
            st2.insert(vec[i][j]);
        }

       }
       if(j!=m-1){
        if(vec[i][j]==vec[i][j+1]){
            st2.insert(vec[i][j]);
        }

       }
       if(i!=0){
        if(vec[i][j]==vec[i-1][j]){
            st2.insert(vec[i][j]);
        }

       }
       if(i!=n-1){
        if(vec[i][j]==vec[i+1][j]){
            st2.insert(vec[i][j]);
        }

       }
    }
    
}
int a=st1.size();
    int b=st2.size();
    if(b==0){
        cout<<a-1<<"\n";
    }
    else{
        cout<<2*(b-1)+(a-b)<<"\n";
    }
 t--;}

}