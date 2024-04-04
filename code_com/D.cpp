#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<map>
#define ll long long
void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
    int n;
    cin>>n;
    int mx=1e7;
    vector<int> vec(2*1e5+5,0);
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        vec[ele]++;
        mx=max(ele,mx);

    }
    int ans=3;
    int ct=n;
    
    int i=1;
    int mn=vec[0];
    vector<pair<int,int>> b;

    while(i<=mx+1){
        int l=max(0,mn-vec[i]);
        ct-=(l*i);
        b.push_back({i,l});
        
        mn=min(mn,vec[i]);
        if(vec[i]==0){
            break;
        }
        i++;
      
           }
    for(int j=b.size()-1;j>=0;j--){
        for(int k=0;k<b[j].second;k++){
cout<<b[j].first<<" ";
        }
        
    }
    for(int j=0;j<ct;j++){
        cout<<0<<" ";
    }
    cout<<"\n";



    

 t--;}

}