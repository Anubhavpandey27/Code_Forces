#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#define ll long long
vector<int> ans(1e6,0);
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
void dfs(vector<bool>&vis,map<int,vector<int>>&mp,int node,int &len,vector<int> &vec){
     vis[node]=false;
     if(node==vis.size()-1){
        if(len<ans.size()){
            ans=vec;
        }
        return;
     }
     
     
       for(int x:mp[node]){
        
            vec.emplace_back()
            dfs(vis,mp,x,len,vec);
            vis[x]=false;
        
       }
     
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){

 t--;}

}