#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
ll helper(vector<ll> &vec,vector<vector<ll>> &dp,vector<ll> &arr,ll i,ll bob){
    if(i>=arr.size()){
        return 0;
    }
    if(dp[i][bob]!=-1){
        return dp[i][bob];
    }
    ll a=0;
    if(bob>=vec[arr[i]]){
        bob-=vec[arr[i]];
        a++;

        a+=helper(vec,dp,arr,i+1,bob);
        bob+=vec[arr[i]];
    }
    ll b=helper(vec,dp,arr,i+1,bob+1);
    dp[i][bob]=max(a,b);
    return dp[i][bob];
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){
int n;
cin>>n;
vector<ll> vec(n+1,0);
vector<vector<ll>>dp(n,vector<ll>(n,-1));
vector<pair<ll,ll>> fre(n+1,{0,0});
vector<ll> arr;

for(int i=0;i<n;i++){
    ll ele;
    cin>>ele;
    vec[ele]++;
    

}

for(int k=0;k<=n;k++){
    if(vec[k]>0){
arr.emplace_back(k);
    }
}


cout<<arr.size()-helper(vec,dp,arr,0,0)<<"\n";

 t--;}

}






attack =3 2 3 2 3 1 2
turn =  6 5 9 5 10 7 7

arr[][]=(6,3),(7,0) ,(8,5),(8,6),(11,4) ,(11,1)
// h-attack[arr[0][1]]

//(arr[0][0]+turn[arr[0][1]],arr[0][1])




