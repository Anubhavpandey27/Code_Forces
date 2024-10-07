#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <set>
#define ll long long
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
    int ans=0;
    set<int> st;
    for(int i=0;i<n;i++){
        if(st.find(vec[i]+1)==st.end()){
            ans++;
        }
        st.insert(vec[i]);

    }
    cout<<ans<<"\n";


 t--;}

}