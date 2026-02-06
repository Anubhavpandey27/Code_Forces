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

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
    int n,m;
    cin>>n>>m;
     bool tp=true;
    vector<vector<int>>vec;
    for(int i=0;i<n;i++){
        vector<int> v;
        for(int j=0;j<m;j++){
            int ele;
            cin>>ele;
            v.emplace_back(ele);

        }
        sort(v.begin(),v.end());
        vec.push_back(v);
        
        for(int i=0;i<m-1;i++){
            if(v[i]+n!=v[i+1]){
                tp=false;
            }

        }
    }
    if(!tp){
        cout<<-1<<"\n";
        
    }
    else{
         vector<pair<int,int>> v1;
    for(int i=0;i<n;i++){
        v1.push_back({vec[i][0],i});
    }
    sort(v1.begin(),v1.end());
    for(int i=0;i<n;i++){
       cout<<v1[i].second+1<<" ";
    }
    
    cout<<"\n";
    }
    
    
    

 t--;}

}