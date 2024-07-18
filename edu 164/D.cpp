#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
const int md=998244353;
vector<ll>vec(5050,0);
vector<ll>sm(5050,0);
void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int n;
cin>>n;
for(int i=1;i<=n;i++){
    ll ele;
    cin>>ele;
    vec[i]=ele;
}
sm[0]=1;
vec[0]=1;
ll tp=0;
sort(vec.begin()+1,vec.begin()+n+1);
ll ans=0;
for(int i=1;i<=n;i++){
tp=vec[i];
for(int j=0;j<=tp;j++){
ans=(ans+sm[j]*tp)%md;

}
for(int j=tp+1;j<5050;j++){
    ans=(ans+sm[j]*((j+tp+1)/2))%md;
}
for(int j=5050-1;j>=0;j--){
    if(j>=tp){
        sm[j]=(sm[j]+sm[j-tp])%md;
    }
}
}
cout<<ans<<"\n";


}