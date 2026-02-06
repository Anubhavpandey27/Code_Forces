#include <iostream>
using namespace std;
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <math.h>
#include <stack>
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
    int n=s.size();
    bool ans=false;
    if(n&1){
        ans=true;
    }
    if(n==2){
        cout<<"NO"<<"\n";
        t--;
        continue;
    }
    stack<int> st;
    bool comp=false;
    int ct=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            if(st.size()==0){
                ct++;
            }
            st.push(1);
        }
        else{
            if(st.size()==0){
                ans=true;
                break;
            }
            else{
                st.pop();
            }
        }
        if(i==n-1){
            comp=true;
        }
    }
    if(ct>1){
        ans=true;
    }
    if(ans){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    

 t--;}

}