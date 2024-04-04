#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
vector<ll> helper(ll x){
    vector<ll> ans;
    if((x&1)==1){
        ans=helper(x-1);
        

    }
    else{
        ans=helper(x/2);
    }
}

int main(){
int t;
cin>>t;
while(t){
    ll x;
    cin>>x;


 t--;}

}