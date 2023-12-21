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
    
    ll n,k;
    cin>>n>>k;
    
    vector<ll>pre(n+1,0);
    vector<ll> mx(n+1,0);
    for(int i=1;i<=n;i++){
        ll ele;
        cin>>ele;
        pre[i]=pre[i-1]+ele;
       
    }
    
    for(int i=1;i<=n;i++){
        ll ele;
        
        cin>>ele;
        mx[i]=max(mx[i-1],ele);
        
    }
    ll ans=0;
    vector<ll> dp(n+1,0);
    for(int i=1;i<=n;i++){
        if(k<i){
            break;
        }
        ll temp;
        temp=pre[i]+(k-i)*mx[i];
        ans=max(ans,temp);
        
    }
    cout<<ans<<"\n";


}

}