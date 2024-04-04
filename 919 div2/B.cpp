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
    ll ans=-1e10;
    vector<ll> pref={0};
    for(int i=0;i<n;i++){
pref.emplace_back(pref[i]+vec[i]);
    }
    ll n1=pref.size()-1;
    for(int i=0;i<=k;i++){
        ans=max(ans,pref[max(0 ,int(n1-i-x))]-pref[max(0,int(n1-i))]+pref[max(0 ,int(n1-i-x))]);

        
    }


   
    
    cout<<ans<<"\n";

}

}