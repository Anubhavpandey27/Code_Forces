#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<bitset>
#include<set>
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
    map<ll,ll>mp;
    set<ll> vec;
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        vec.insert(ele);
        mp[ele]++;
    }
    ll ans=0;
    ll v=2147483647;
    for(auto i :vec){
        if(vec.find(i^v)!=vec.end()){
            
            ans+=min(mp[i],mp[i^v]);
        }   
                
                
             }
     cout<<n-ans/2<<"\n";

 t--;}

}