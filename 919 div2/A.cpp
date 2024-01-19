#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<set>
#define ll long long
void helper(){
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
    ll n;
    cin>>n;
    set<ll> vec;
    ll low=-1e10;
    ll up= 1e10;
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        if(a==1){
            low=max(low,b);
        }
        else if(a==2){
            up=min(up,b);
        }
        else{
            vec.insert(b);
        }

    }
    ll ans=up-low+1;
    for(auto x:vec){
          if(x>=low && x<=up){
            ans--; 
          }
    }
    if(ans<0){
        cout<<0<<"\n";
    }
    else{
    cout<<ans<<"\n";
    }

}

}