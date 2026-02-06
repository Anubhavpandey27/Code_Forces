#include <iostream>
using namespace std;
#include <vector>
#include <set>
#include <map>
#include <string>
#include <queue>
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
void bfs(int a,vector<vector<int>> &vec,vector<bool> &vis,vector<int>&baap){
    queue<int> q;
    q.push(a);
    vis[a]=false;
    while(q.size()>0){
        int temp=q.front();
        q.pop();
        for(int  ele: vec[temp]){
            if(vis[ele]){
                baap[ele]=temp;
                vis[ele]=false;
                q.push(ele);
            }
        }
    }
    

}
int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
    int n;
    cin>>n;
    vector<ll>w(n+1,0);
    vector<int> big;
    ll mx=0;
    ll ct_mx=0;
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        w[i+1]=ele;
        if(ele==mx){
            ct_mx=2;
            big.emplace_back(i+1);
        }
        else if( ele>mx){
            mx=ele;
            big={i+1};
            ct_mx=1;
        }
    }
    vector<int>deg(n+1,0);
    vector<int> baap(n+1,0);
    vector<vector<int>> graph(n+1);
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        graph[a].emplace_back(b);
        graph[b].emplace_back(a);
    }
    vector<bool> vis(n+1,true);
    bfs(1,graph,vis,baap);
    

    if(ct_mx<=1){
        int a=big[0];
        while(a!=1){
            int temp=baap[a];
            baap[a]=-1;
            a=temp;
        }
        
        int mx=0;
        int ans=0;
        for(int i=2;i<=n;i++){
            if(baap[i]!=-1){
                if(mx<w[i]){
                    mx=w[i];
                    ans=i;
                }
            }

        }
        cout<<ans<<"\n";

    }
    else{
        vector<int> t1(n+1,0);
        for(int i=0;i<big.size();i++){


        int a=big[i];
        while(a!=1){
            t1[a]--;
            a=baap[a];
        }
        }
        int mx=0;
        int ans=0;
        for(int i=2;i<=n;i++){
            if(t1[i]!=-1*big.size()){
                if(mx<w[i]){
                    mx=w[i];
                    ans=i;
                }
            }

        }
        cout<<ans<<"\n";
        


    }


 t--;}

}







