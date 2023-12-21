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
    vector<ll> ans;
    for(int i=1;i<=k;i++){
        cout<<i<<" ";
    }
    for(int i=n;i>k;i--){
        cout<<i<<" ";

    }
    cout<<"\n";
    

}

}