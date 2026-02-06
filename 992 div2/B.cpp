#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
void helper(){
}
vector<ll>input(int n){
  
    vector<ll>vec;
    for(int i=0;i<n;i++){
      ll ele;
      cin>>ele;
      vec.emplace_back(ele);
    }
    return vec;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
    int n;
    cin>>n;
    int ans=1;
    if(n==1){
        cout<<1<<"\n";
    }
    else {
        int ct=1;
        while(true){
          ct=2*(ct+1);
          ans++;


            if(ct>=n){
                break;
            }
        }
        cout<<ans<<"\n";

    }

 t--;}

}