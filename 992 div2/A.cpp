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
    int n,k;
    cin>>n>>k;
    vector<ll> vec=input(n);
    int ans=-1;
    for(int i=0;i<n;i++){
        if(ans!=-1){
            break;
        }

        for(int j=0;j<n;j++){
            if(i==j){
                
            }
            else if(abs(vec[j]-vec[i])%k!=0){
                
            }
            else{
                break;
            }
            if(j==n-1){
                ans=i;
                break;
            }
        }

    }
    if(ans==-1){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
        cout<<ans+1<<"\n";
    }

 t--;}

}