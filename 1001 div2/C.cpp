#include <iostream>
using namespace std;
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
ll helper(vector<ll>&vec,ll &mx){
    if(vec.size()==1){
        return vec[0];
    }
   
    vector<ll>v1;
    vector<ll>v2;
    ll sm1=0;
    ll sm2=0;
    for(int i=0;i<vec.size()-1;i++){
        v1.emplace_back(vec[i+1]-vec[i]);
        v2.emplace_back(vec[vec.size()-2-i]-vec[vec.size()-1-i]);
        sm1+=v1[i];
        sm2+=v2[i];
    }
    
    return max(mx,max(helper(v1,sm1),helper(v2,sm2)));;

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
ll sum_of(vector<ll>&vec){
    ll ans=0;
    for(int i=0;i<vec.size();i++){
        ans+=vec[i];
    }
    return ans;
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
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=vec[i];
    }
    for(int i=0;i<n-1;i++){
        vector<ll> v1;
        vector<ll> v2;
        for(int j=0;j<vec.size()-1;j++){
            v1.emplace_back(vec[j+1]-vec[j]);
            v2.emplace_back(vec[vec.size()-2-j]-vec[vec.size()-1-j]);
            
            

            

        }
        ll sm1=sum_of(v1);
        ll sm2=sum_of(v2);
        ans=max(ans,max(sm1,sm2));
            if(sm1>sm2){
                vec=v1;
            }
            else{
                vec=v2;
            }


    }
    cout<<ans<<"\n";

 t--;}

}