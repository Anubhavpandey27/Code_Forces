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
    bool ans=true;
    ll n;
    cin>>n;
    vector<ll>a,b;
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        a.emplace_back(ele);
    }
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        b.emplace_back(ele);
    }
    ll l=-1;
    ll r=-1;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            if(a[i]<b[i]){
                ans=false;
                break;
            }   
            l=max(i-1,0);

        }

    }

}

}