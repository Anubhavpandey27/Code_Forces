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
for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    vec.emplace_back(ele);
}
for(int i=n-2;i>=0;i--){
vec[i]=max(vec[i],vec[i+1]+1);
}
cout<<vec[0]<<"\n";
 t--;}

}