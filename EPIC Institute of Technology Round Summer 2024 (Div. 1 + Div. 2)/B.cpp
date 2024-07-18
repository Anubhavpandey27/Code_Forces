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
vector<ll> rem;
ll ans=0;
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    vec.emplace_back(ele);
    if(i>0){
        if(vec[i]<vec[i-1]){
            
            rem.emplace_back(vec[i-1]-vec[i]);
            vec[i]=vec[i-1];
            
        }
    }
}
sort(rem.begin(),rem.end());
ll tot=0;
for(int i=0;i<rem.size();i++){

ans+=(rem[i]-tot)*(rem.size()-i+1);
tot=rem[i];

}
cout<<ans<<"\n";
 t--;}

}