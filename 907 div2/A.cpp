#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
long long helper(int a,int b){
    long long ans=1;
    for(int i=0;i<b;i++){
     ans*=a;
    }
    return ans;
}

int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
    long long n;
    vector<long long > vec;
    vec.push_back(0);
    cin>>n;
    for(int i=0;i<n;i++){
        long long k;
        cin>>k;
        vec.emplace_back(k);
    }
  int   m=1;
  bool ans=true;
    while(helper(2,m)<=n){
       for(int i=helper(2,m-1)+1;i<helper(2,m);i++){
        //cout<<"yooo"<<endl;
        if(vec[i]>vec[i+1]){
            ans=false;
        }
           
       }
       m++;
    }
    for(int i=helper(2,m-1)+1;i<n;i++){
        if(vec[i]>vec[i+1]){
            ans=false;
        }
    }
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

}