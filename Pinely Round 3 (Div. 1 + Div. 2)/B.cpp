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
    unsigned ll a,b;
    a=(0ULL);
    b=0;
    vector<ll> vec;
    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        a&=ele;
        b|=ele;
        vec.emplace_back(ele);
    }
    ll ans=a^b;
    cout<<ans<<"\n";


}

}