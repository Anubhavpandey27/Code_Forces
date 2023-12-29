#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <set>
#define ll long long
void helper(){
}

int main(){
ll t;
cin>>t;
for(int j=0;j<t;j++){
    bool ans=true;
    ll n;
    cin>>n;
    set<int> st;
    vector<int>vec(4,0);
    int cn=0;
   
    for(int i=0;i<n;i++){
         int x,y;
        cin>>x>>y;
        if(x>0){
           if(vec[0]==0){
            vec[0]+=1;
            cn+=1;
           }
        }
        else if(x<0){
            if(vec[1]==0){
            vec[1]+=1;
            cn+=1;
           }
        }
        if(y>0){
            if(vec[2]==0){
            vec[2]+=1;
            cn+=1;
           }
        }
        else if(y<0){
            if(vec[3]==0){
            vec[3]+=1;
            cn+=1;
           }
        }
        

    }
    if(cn>=4){
            ans=false;
            
        }
    if(ans){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }

}

}