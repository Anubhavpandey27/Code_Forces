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
    int ans=1e8;
    int x1,y1;
    cin>>x1>>y1;
    for(int i=1;i<4;i++){
      int x,y;
      cin>>x>>y;
      if(x==x1){
        ans=abs(y-y1);
      }
      else if(y==y1){
        ans=abs(x-x1);
      }
    }
    cout<<ans*ans<<"\n";

 t--;}

}