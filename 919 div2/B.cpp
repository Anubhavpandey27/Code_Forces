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
int t;
cin>>t;
for(int z=0;z<t;z++){
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll> vec;
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        vec.emplace_back(ele);
    }
    sort(vec.begin(),vec.end());
    vector<int> pref={0};
    for(int i=0;i<n;i++){
pref.emplace_back(pref[i]+vec[i]);
    }
    for(int i=0;i<=k;i++){
        
    }


    ll i=0;
    ll j=vec.size()-1;
    while(i<=j && k>0){
        if(vec[i]<0){
            if((-vec[i])>(2*vec[j])){
                vec.erase(vec.begin()+i);
                k--;
                i++;
            }

        }
        else{
            vec.erase(vec.begin()+j);
            k--;
            j--;
        }
    }
    for(int l=vec.size()-1;l>=0;l++){
        if(vec[l]>=0){
            vec[l]*=-1;
            x--;
        }
        else{
            break;
        }
        if(x<=0){
          break;
        }
    }
    ll ans=0;
    for(int l=0;l<vec.size();l++){
        ans+=vec[l];
    }
    cout<<ans<<"\n";

}

}