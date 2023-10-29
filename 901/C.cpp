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
int n,m;
cin>>n>>m;
int ans=0;
for(int i=n;i<=2*n;i++){
if(i%m==0){
    cout<<ans<<endl;
    break;
}
else if(i==2*n){
    cout<<-1<<endl;

}
else{ans++;}
}
}

}