#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<set>
#define ll long long
void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
    ll n,h;
    cin>>n>>h;
    multiset<ll> st1,st2;
    for(int i=1;i<=n;i++){
        ll ele;
        cin>>ele;
        st1.insert(ele^i);

    }
    for(int i=1;i<=n;i++){
        ll ele;
        cin>>ele;
        st2.insert(ele^i);

    }
    ll ans=0;
    for(auto x : st1){
        ans+=st2.count(x^h);
    }
cout<<ans<<"\n";
 t--;}

}