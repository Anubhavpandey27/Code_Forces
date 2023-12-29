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
for(int j=0;j<t;j++){
    ll n,m,d;
    vector<ll>a,v;
    a.emplace_back(1);
    v.emplace_back(1);
    cin>>n>>m>>d;
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        a.emplace_back(ele);
    }
     for(int i=0;i<m;i++){
        ll ele;
        cin>>ele;
        v.emplace_back(ele);
    }
    ll temp=min(2*n+1,d);
    ll ans=0;
    ll i=1;
    for(int k=1;k<=temp;k++){
        ll cr=0;
        for(int z=1;z<=n;z++){
            if(a[z]==z){
                cr++;
            }
        }
        cr=cr+int((d-k)/2);
        ans=max(ans,cr);
        for(int z=1;z<=v[i];z++){
            a[z]+=1;
            i++;
            if(i>m){
                i=1;
            }
        }
        
    }
    cout<<ans<<endl;

}

}