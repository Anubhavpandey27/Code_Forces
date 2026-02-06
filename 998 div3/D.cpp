#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include  <set>
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
    bool tp=true;
    vector<int> vec={0};
    // set<pair<int,int>> st;
    for(int i=1;i<=n;i++){
        int ele;
        cin>>ele;
        vec.emplace_back(ele);
        // st.insert({ele,i});

    }
    // int pt=n;
    // while(st.size()>0){
    //     auto it =st.end();
    //     it--;
    //     pair<int,int> p=*it;
    //     if(p.second==n){
    //         st.erase(it);
    //         n--;
    //         continue;
    //     }
    //     if(vec[p.second]!=p.first){
    //         st.erase(it);
    //         continue;
    //     }
    //     if(vec[p.second-1]==0 && vec[p.second+1]==0){
    //         tp=false;

    //         break;
    //     }
    //     if(vec[p.second-1]==0){
    //         int neg=min(vec[p.second],vec[p.second+1]);
    //         vec[p.second]-=neg;
    //         vec[p.second+1]-=neg;
    //         st.insert({vec[p.second+1],p.second+1});
    //         st.insert({vec[p.second],p.second});
    //         st.erase(it);
    //     }
    //     else{
    //         int neg=min(vec[p.second],vec[p.second-1]);
    //         vec[p.second]-=neg;
    //         vec[p.second-1]-=neg;
    //         st.insert({vec[p.second-1],p.second-1});
    //         st.insert({vec[p.second],p.second});
    //         st.erase(it);

    //     }

    // }
    for(int i=1;i<n;i++){
        int neg=min(vec[i],vec[i+1]);
        vec[i]-=neg;
        vec[i+1]-=neg;

    }
    for(int i=0;i<n;i++){
        if(vec[i]>vec[i+1]){
            tp=false;
            break;
        }
    }
    if(tp){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }

 t--;}

}