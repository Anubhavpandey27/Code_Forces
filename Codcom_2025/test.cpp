#include <iostream>
using namespace std;
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <math.h>
#include <queue>
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
int deleteProducts(vector<int> ids,int m){
    map<int,int>mp;
    for(int x:ids){
        mp[x]++;
    }
    vector<int> vec;
    for(pair<int,int>p:mp){
        vec.emplace_back(p.second);
    }
    sort(vec.begin(),vec.end());
    int ans=vec.size();
    for(int i=0;i<vec.size();i++){
        if(m==0){
            break;
        }
        if(vec[i]<=m){
            ans--;
            m-=vec[i];
        }
        else{
            break;
        }
    }
    return ans;

}
vector<string> closestColor(vector<string> pixels){


}
int  countMatches(vector<string>grid1,vector<string>grid2){
    int n=grid1.size();
    int m=grid1[0].size();
    vector<vector<int>>vec(n,vector<int>(m,0));
    queue<pair<int,int>>q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            vec[i][j]=((grid1[i][j]-'0')+(grid2[i][j]-'0'));
            if(vec[i][j]==1){
               q.push({i,j});
            }

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<vec[i][j]<<" ";

        }
        cout<<"\n";
    }
    while(q.size()>0){
        int a=(q.front()).first;
        int b=(q.front()).second;
        q.pop();
        if(vec[max(a-1,0)][b]==2){
            q.push({a-1,b});
            vec[a-1][b]=1;
        }
        if(vec[a][max(0,b-1)]==2){
            q.push({a,b-1});
            vec[a][b-1]=1;
        }
        if(vec[min(a+1,n-1)][b]==2){
            q.push({a+1,b});
            vec[a+1][b]=1;
        }
        if(vec[a][min(m-1,b+1)]==2){
            q.push({a,b+1});
            vec[a][b+1]=1;
        }

    }
    int ans=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vec[i][j]==2){
                vec[i][j]=1;
                ans++;
                q.push({i,j});
                while(q.size()>0){
        int a=(q.front()).first;
        int b=(q.front()).second;
        q.pop();
        if(vec[max(a-1,0)][b]==2){
            q.push({a-1,b});
            vec[a-1][b]=1;
        }
        if(vec[a][max(0,b-1)]==2){
            q.push({a,b-1});
            vec[a][b-1]=1;
        }
        if(vec[min(a+1,n-1)][b]==2){
            q.push({a+1,b});
            vec[a+1][b]=1;
        }
        if(vec[a][min(m-1,b+1)]==2){
            q.push({a,b+1});
            vec[a][b+1]=1;
        }

    }
            }

        }
    }
    return ans;


}
void convert(){

}
int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);

vector<string> g1={"111","101","100"};
vector<string>g2={"111","100","101"};
cout<<countMatches(g1,g2);

}