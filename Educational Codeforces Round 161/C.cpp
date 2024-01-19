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
while(t){
    ll n;
    cin>>n;
    vector<ll> vec;
    vector<ll> pre(n,0);
    
    vector<ll> pos(n,0);
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        vec.emplace_back(ele);
    }
   pre[1]=1;
    for(int i=2;i<n-1;i++){
    if(vec[i]-vec[i-1]<vec[i-1]-vec[i-2]){
        pre[i]=(1+pre[i-1]);
    }
    else{
        pre[i]=(vec[i]-vec[i-1]+pre[i-1]);
    }

    }
    if(n>2){
     if(vec[n-1]-vec[n-2]<vec[n-2]-vec[n-3]){
        pre[n-1]=(1+pre[n-2]);
    }
    else{
        pre[n-1]=(vec[n-1]-vec[n-2]+pre[n-2]);
    }
    }
    pos[n-2]=1;
    for(int i=n-3;i>0;i--){
        if(vec[i+2]-vec[i+1]>vec[i+1]-vec[i]){
            pos[i]=pos[i+1]+1;
        }
        else{
            pos[i]=pos[i+1]+vec[i+1]-vec[i];
        }
          
    }
    if(n>2){
        if(vec[2]-vec[1]>vec[1]-vec[0]){
            pos[0]=pos[1]+1;
        }
        else{
            pos[0]=pos[1]+vec[1]-vec[0];
        }
    }
    ll m;
    cin>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        if(a<b){
            cout<<pre[b]-pre[a]<<"\n";
        }
        else{
            cout<<abs(pos[a]-pos[b])<<"\n";
        }
    }


    

 t--;}

}