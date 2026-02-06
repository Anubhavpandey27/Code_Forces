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
    vector<int> vec(n+1,0);
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        vec[ele]++;
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(i<k){
            if(k-i==i){
                ans+=(vec[i]/2);
                vec[i]=0;
            }
           else if(k-i<=n){
                ans+=min(vec[i],vec[k-i]);
                vec[i]=0;
            }

        }
    }
    cout<<ans<<"\n";

 t--;}

}