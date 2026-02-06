#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
ll hf=0;
ll sm(ll k,ll ed){
    return ((ed-k+1)*(k+ed))/2;
}

void helper(){
}
vector<ll>input(int n){
  
    vector<ll>vec;
    for(int i=0;i<n;i++){
      ll ele;
      cin>>ele;
      vec.emplace_back(ele);
    }
    return vec;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
ll n,k;
cin>>n>>k;
ll l=k+n-1;
hf=(n)


}