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
    bool ans=false;
    ll n;
    cin>>n;
    
    vector<ll> od(n+1,0);
    vector<ll> eve(n+1,0);
    set<ll> st;
    
    if(n==1){
        ll ab;
        cin>>ab;
        ans=false;
    }
    else if( n==2){
        ll a;
    ll b;
    cin>>a>>b;
    if(a==b){
        ans=true;
    }
    }
    else{
        ll sm=0;
        st.insert(0);
    
    for(int i=1;i<=n;i++){
        ll ele;
        cin>>ele;
        if(!(i&1)){
            sm+=ele;
              st.insert(sm);
        }
        else{
            sm-=ele;
            st.insert(sm);
        }
        


    }
    if(st.size()<n+1){
        ans=true;
    }
    
    
    
    
    }
    if(ans){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }

}

}