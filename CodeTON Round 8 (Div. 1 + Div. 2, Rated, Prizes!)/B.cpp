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
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
int n;
cin>>n;
vector<ll> vec;
ll mn=n;
for(int i=0;i<n;i++){
     ll ele;
     cin>>ele;
     vec.emplace_back(ele);
}
vector<ll> ans(n,0);
for(int i=n-1;i>=0;i--){
        ans[i]=mn-vec[i];
        mn=min(mn,ans[i]);
}
for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}
cout<<"\n";
 t--;}

}