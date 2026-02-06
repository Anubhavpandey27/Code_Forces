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
    vector<int>vec;
    for(int i=0;i<4;i++){
        int ele;
        cin>>ele;
        vec.emplace_back(ele);

    }
    if(vec[0]+vec[1]==vec[2]-vec[1] &&vec[2]-vec[1]==vec[3]-vec[2]){
        cout<<3<<"\n";
    }
    else if(vec[0]+vec[1]==vec[2]-vec[1]  || vec[2]-vec[1]==vec[3]-vec[2] || vec[3]-vec[2]==vec[0]+vec[1]){
        cout<<2<<"\n";
    }
    else{
        cout<<1<<"\n";
    }

 t--;}

}