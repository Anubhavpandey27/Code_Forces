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
int t;
cin>>t;
while(t){
    ll n;
    cin>>n;
    vector<ll> vec;
    map<ll,ll> mp;
    
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        vec.emplace_back(ele);
        mp[ele]++;

    }
    sort(vec.begin(),vec.end());
    ll ans=0;
    int i=0;
    while(i<n-1){
        if(vec[i]==vec[i+1]){
            ans+=i;
            if(mp[vec[i]]>2){
                ans+=(i*(mp[vec[i]]-2));
            }
            mp[vec[i]]--;
        }
        
      i++;
    }
    cout<<ans<<"\n";

 t--;}

}
