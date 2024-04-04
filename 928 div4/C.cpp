#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
ll binary_exp(ll a, ll b){
    if(b==0){
        return 1;
    }
    ll ex=binary_exp(a,b/2);
    if((b&1)==1){
        
        return ex*ex*a;
    }
    else{
        return ex*ex;

    }
}
void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
vector<ll> vec((2*1e5)+4,0);
for(int i=1;i<vec.size();i++){
    long long abc=0;
    int c=i;
        while(c>0){
            abc+=(c%10);
            c/=10;
        }
    vec[i]=vec[i-1]+abc;
}
int t;
cin>>t;
while(t){
    int n;
    cin>>n;
    cout<<vec[n]<<"\n";

 t--;}

}