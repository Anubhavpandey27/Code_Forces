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
    if(n==2){
        cout<<2<<" "<<2;
    }
    else if(n==3){
        cout<<2<<" "<<1<<" "<<3;
    }
    else{
        for(int i=0;i<n-3;i++){
            cout<<1<<" ";
        }
        if(n&1){
            cout<<2<<" "<<1<<" "<<n;

        }
        else{
            cout<<1<<" "<<2<<" "<<n;
        }
    }


    cout<<"\n";

 t--;}

}