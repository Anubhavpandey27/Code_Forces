#include <iostream>
using namespace std;
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
//#include <ext/pb_ds/assoc_container.hpp> #include <ext/pb_ds/tree_policy.hpp> using namespace __gnu_pbds; #define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
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
    vector<int>power;
    vector<int>vec(n+1,0);
    for(int i=0;i<k;i++){
        int ele;
        cin>>ele;
        vec[ele]++;
        power.emplace_back(ele);
    }
    vector<vector<int>>gp(n+1);
    for (int i = 0; i < n-1; i++)
    {
        int a,b;
        cin>>a>>b;
        gp[a].emplace_back(b);
        gp[b].emplace_back(a);
    }
    for(int i=0;i<k;i++){
        for(int x :gp[power[i]]){
            vec[x]++;
        }
    }
    bool yo=true;
    for(int i=1;i<=n;i++){
        if(vec[i]==0){
            yo=false;
            break;
        }
    }
    if(!yo){
        cout<<"WEAK"<<"\n";
    }
    else{
        bool ayo=true;
        for(int i=0;i<k;i++){
           ayo =true;
        for(int x :gp[power[i]]){
            if(vec[x]<=1){
               ayo=false;
               break;
            }
        }
        if(ayo){
            cout<<"STRONG"<<"\n";
            break;
        }
    }
    if(!ayo){
        cout<<"ACCURATE"<<"\n";
    }


    }
    

 t--;}

}