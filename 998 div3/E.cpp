#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
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

void make_set(int v,vector<int>&dsu){
    dsu[v]=v;
}
int find_set(int v,vector<int>&dsu){
    if(dsu[v]==v){
        return v;
    }
    return dsu[v]=find_set(dsu[v],dsu);
}
void union_set(int a,int b,vector<int>&dsu){
    
    a=find_set(a,dsu);
    b=find_set(b,dsu);
    if(a>b){
        swap(a,b);
    }
    if(a!=b){
        dsu[b]=a;   
    }
}


int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
    int n,m1,m2;
    cin>>n>>m1>>m2;
    vector<int> dsu1(n+1,0);
    vector<int> dsu2(n+1,0);
    for(int i=1;i<=n;i++){
        make_set(i,dsu1);
        make_set(i,dsu2);
    }
    vector<pair<int,int>> vec;
    for(int i=0;i<m1;i++){
        int a,b;
        cin>>a>>b;
        vec.push_back({a,b});
    }
    for(int i=0;i<m2 ;i++){
        int a,b;
        cin>>a>>b;
        union_set(a,b,dsu1);
        
    }
    int ans=0;
    for(int i=0;i<m1;i++){
        int a=vec[i].first;
        int b=vec[i].second;
        if(find_set(a,dsu1)!=find_set(b,dsu1)){
              ans++;
        }
        else{
            union_set(a,b,dsu2);
        }
    }
    for(int i=1;i<=n;i++){
        if(find_set(i,dsu1)!=find_set(i,dsu2)){
              union_set(find_set(i,dsu1),find_set(i,dsu2),dsu2);
              ans++;
        }
    }
    cout<<ans<<"\n";
    




    

 t--;}

}