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
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
      
int t;
cin>>t;
for(int j=0;j<t;j++){
    ll x,y,k,r,c;
    cin>>r>>c;
    cin>>x>>y>>k;

if(k==0){
    cout<<0<<endl;
}
if(k>=4){
    cout<<r*c-1<<endl;
}
if(k==3){
     cout<<r*c-min(min(x,abs(x-c)+1),min(y,abs(y-r)+1))<<endl;
}
if(k==2){
    ll blue=min(min(r,c),min(x,abs(x-r)+1)*min(y,abs(y-c)+1));
    cout<<r*c-blue<<endl;
}
if(k==1){
    ll blue=min(min(r*x,r*(abs(c-x)+1)),min(c*y,c*(abs(y-r)+1)));
    cout<<r*c-blue<<endl;
}

}

}