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
vector<pair<ll,ll>> vec={{0,0}};
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    vec.emplace_back(vec[i].first+ele,vec[i].second);
    if((ele&1)==1){
        vec[i+1].second++;
    }
}
cout<<vec[1].first<<" ";
for(int i=2;i<=n;i++){  
    if(vec[i].second%3==1){
        cout<<vec[i].first-vec[i].second/3-1<<" ";

    }
    else{
        cout<<vec[i].first-vec[i].second/3<<" ";

    }

}
cout<<"\n";
 t--;}

}