#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long

void helper(){
}

int main(){
ll t;
cin>>t;
for(int j=0;j<t;j++){
    ll n;
    cin>>n;
    vector<ll> l,r,c;
    vector<pair<ll,ll>>vec;
    for(int i=0;i<n;i++){
          ll ele;
          cin>>ele;
          vec.push_back(make_pair(ele,1));
    }
    for(int i=0;i<n;i++){
          ll ele;
          cin>>ele;
          vec.push_back(make_pair(ele,2));
    }
    for(int i=0;i<n;i++){
          ll ele;
          cin>>ele;
          c.emplace_back(ele);
    }
    vector<ll>temp1,temp2;

    
    sort(vec.begin(),vec.end());
    //sort(r.begin(),r.end());
    sort(c.begin(),c.end());
    for(int i=0;i<vec.size();i++){
        if(vec[i].second==1){
            temp1.emplace_back(vec[i].first);

            
        }
        else{ 
            temp2.push_back((vec[i].first-temp1.back())); 
            temp1.pop_back(); 
 } 

        
    }
    sort(temp2.begin(),temp2.end());
    reverse(c.begin(),c.end());
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=(c[i]*temp2[i]);

    }
    cout<<ans<<"\n";

    

}

}