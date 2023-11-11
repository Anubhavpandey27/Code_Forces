#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
void helper(){
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
long long x;
long long y;
long long k;
cin>>x>>y>>k;
long long ans=0;
if(y<=x){
    ans=x;

}
else{
long long dis=y-x;
if(k>=dis){
    ans=y;
}
else{
    ans=x+k+2*(dis-k);
}
}
cout<<ans<<endl;

}

}       