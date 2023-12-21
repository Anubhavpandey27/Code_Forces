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
    ll n;
    cin>>n;
 vector<ll> a,b;
 vector<pair<ll,ll>>ab;
 for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    a.emplace_back(ele);
    ab.push_back(make_pair(ele,i));
 }
  for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    b.emplace_back(ele);
    ab[i].first+=ele;
 }
 sort(ab.begin(),ab.end());
 ll a1=0;
 ll b1=0;
 reverse(ab.begin(),ab.end());
 
 ll ans=0;
 for(int i=0;i<n;i++){
    int j=ab[i].second;
     if(i%2==0){
       
        a1+=a[j]-1;
     }
     else{
        b1+=b[j]-1;
     }
 }
 
 cout<<a1-b1<<"\n";


}

}